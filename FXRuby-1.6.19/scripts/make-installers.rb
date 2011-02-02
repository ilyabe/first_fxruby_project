require 'ftools'
require 'net/ftp'

# Arguments passed to config stage of setup
config_args = [
  "--make-prog=nmake",
  "--",
  "--with-fox-include=c:\\src\\fox-1.6.4\\include",
  "--with-fox-lib=c:\\src\\fox-1.6.4\\lib",
  "--with-fxscintilla-include=c:\\src\\fxscintilla-1.63-fox1.6\\include",
  "--with-fxscintilla-lib=c:\\src\\fxscintilla-1.63-fox1.6\\lib"
]

# Inno Setup command-line compiler
ISCC = "C:\\Progra~1\\InnoSe~1\\ISCC.exe"

def untar(fxruby_version)
  tarfile = "../ftp/FXRuby-#{fxruby_version}.tar.gz"
  dirname1 = "FXRuby-#{fxruby_version}"
  dirname2 = "FXRuby-#{fxruby_version}-ruby#{VERSION}"
  if File.exists? dirname1
    system("rm", "-r", dirname1)
  end
  if File.exists? dirname2
    system("rm", "-r", dirname2)
  end
  system("tar", "xzf", tarfile)
  puts "File.mv(#{dirname1}, #{dirname2})"
  File.mv(dirname1, dirname2)
end

def copy_installer_script(fxruby_version)
  iss_filename = nil
  case VERSION
    when /1.6/
      iss_filename = "FXRuby-ruby1.6-i586-mswin32.iss"
    when /1.8.2/
      iss_filename = "FXRuby-ruby1.8.2-i386-msvcrt.iss"
    when /1.8.4/
      iss_filename = "FXRuby-ruby1.8.4-i386-msvcrt.iss"
  end
  dir = "FXRuby-#{fxruby_version}-ruby#{VERSION}"
  [iss_filename, dir]
end

def do_config(args)
  ruby = "C:\\ruby-#{VERSION}\\bin\\ruby.exe"
  system(ruby, "install.rb", "config", *args)
end

def do_setup
  ruby = "C:\\ruby-#{VERSION}\\bin\\ruby.exe"
  system(ruby, "install.rb", "setup")
end

def do_inno_setup(scriptname)
  system(ISCC, scriptname)
end

def do_upload(fxruby_version)
  file = nil
  case VERSION
    when /1.6.8/
      file = "FXRuby-#{fxruby_version}-ruby168.exe"
    when /1.8.2/
      file = "FXRuby-#{fxruby_version}-ruby182.exe"
    when /1.8.4/
      file = "FXRuby-#{fxruby_version}-ruby184.exe"
  end
  ftp = Net::FTP.open('upload.sourceforge.net', 'ftp', 'lyle@rubyforge.org')
  ftp.putbinaryfile(file, "/incoming/" + file)
  ftp.close
end

if __FILE__ == $0
  fxruby_version = "1.6.19"
  untar(fxruby_version)
  iss_filename, dir = copy_installer_script(fxruby_version)
  Dir.chdir(dir)
  do_config(config_args)
  do_setup
  do_inno_setup(iss_filename)
# do_upload(fxruby_version)
end
