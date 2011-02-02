# Which directories to search?
def search_directories
  dirs = [
          "/usr/include/fox-1.6",
          "/usr/local/include/fox-1.6",
          "/sw/include/fox-1.6",
	  "/opt/local/include/fox-1.6"
         ]
  ARGV.each do |arg|
    if arg =~ /--with-fox-include/
      option, value = arg.split('=')
      dirs = [ value ] + dirs
      dirs.uniq! # remove duplicates
    end
  end
  dirs
end

# Return true if found in any of the search directories
def fox_include_files_found?
  search_directories.each do |path|
    filename = File.join(path, "fxver.h")
    return true if FileTest.exist?(filename)
  end
  false
end

# Read installed FOX version info from fxver.h include file
def read_fox_version(filename)
  foxMajor, foxMinor, foxLevel = nil, nil, nil
  File.foreach(filename) do |line|
    if    line =~ /FOX_MAJOR/
      foxMajor = line.split()[2]
    elsif line =~ /FOX_MINOR/
      foxMinor = line.split()[2]
    elsif line =~ /FOX_LEVEL/
      foxLevel = line.split()[2]
    end
  end
  [foxMajor, foxMinor, foxLevel]
end

# Returns a string (e.g. "1.0.36") indicating the installed version of FOX.
def installed_fox_version
  search_directories.each do |path|
    filename = File.join(path, "fxver.h")
    if FileTest.exist?(filename)
      foxMajor, foxMinor, foxLevel = read_fox_version(filename)
      return [foxMajor, foxMinor, foxLevel].join('.')
    end
  end
  raise RuntimeError, "couldn't find FOX header files"
end

#
# Confirm that FOX is installed; check for an "fxver.h"
# include file in the directory specified via the
# --with-fox-include command line argument (if any),
# as well as /usr/include/fox-1.6, /usr/local/include/fox-1.6 and
# /sw/include/fox-1.6.
#
unless fox_include_files_found?
  puts ""
  puts "   **********************************************************************"
  puts "   *                            Hey!                                    *"
  puts "   *                    Where is FOX installed?                         *"
  puts "   *                                                                    *"
  puts "   * I couldn't locate 'fxver.h' in any of the following directories:   *"
  puts "   *                                                                    *"
  search_directories.each { |incdir| puts "   *    #{incdir}" }
  puts "   *                                                                    *"
  puts "   * Please specify the locations for the FOX header files and library  *"
  puts "   * using the --with-fox-include and --with-fox-lib options to         *"
  puts "   * extconf.rb as described in the FXRuby installation instructions.   *"
  puts "   **********************************************************************"
  puts ""
  exit
end

#
# Stable releases of FXRuby (i.e. FXRuby-1.0.x) should go with stable releases
# of FOX (i.e. fox-1.0.x) but it's only necessary for the major and minor version
# numbers to match. For example, FXRuby-1.0.22 should work fine with fox-1.0.40.
#
# Development releases of FXRuby (e.g. FXRuby-1.1.65) must go with a specific
# development version of FOX, usually the one with the same version number
# (e.g. fox-1.1.65). All three version numbers must match.
#

instMajor, instMinor, instLevel = installed_fox_version().split('.')
thisMajor, thisMinor, thisLevel = "1.6.0".split('.')

expecting_stable_fox_release = ((thisMinor.to_i % 2) == 0)
if expecting_stable_fox_release
  if (instMinor != thisMinor)
    puts ""
    puts "   ********************************************************"
    puts "   * This version of FXRuby (1.6.19) must be built against"
    puts "   * one of the stable releases of FOX, but it appears that"
    puts "   * you have a development version of FOX (version #{installed_fox_version})"
    puts "   * installed instead. Please download and install one of"
    puts "   * the stable releases of FOX first, and then try again."
    puts "   ********************************************************"
    puts ""
    exit
  end
else
  # Minor version number is odd, so it's a development release
  raise RuntimeError unless ((instMajor == thisMajor) && (instMinor == thisMinor) && (instLevel == thisLevel))
end

