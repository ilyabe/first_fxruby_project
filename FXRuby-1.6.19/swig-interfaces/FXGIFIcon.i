/***********************************************************************
 * FXRuby -- the Ruby language bindings for the FOX GUI toolkit.
 * Copyright (c) 2001-2003 by J. Lyle Johnson. All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * For further information please contact the author by e-mail
 * at "lyle@users.sourceforge.net".
 ***********************************************************************/


/// GIF Icon class
class FXGIFIcon : public FXIcon {
protected:
  FXGIFIcon(){}
public:
  %extend {
    static VALUE fileExt() {
      return rb_str_new2(FXGIFIcon::fileExt);
      }
    static VALUE mimeType() {
      return rb_str_new2(FXGIFIcon::mimeType);
      }
    }
public:
  %extend {
    /// Construct an icon from memory stream formatted as GIF format
    FXGIFIcon(FXApp* a,const void *pix=NULL,FXColor clr=0,FXuint opts=0,FXint w=1,FXint h=1){
      return new FXRbGIFIcon(a,pix,clr,opts,w,h);
      }
    }

  /// Destroy
  virtual ~FXGIFIcon();
  };


DECLARE_FXOBJECT_VIRTUALS(FXGIFIcon)
DECLARE_FXID_VIRTUALS(FXGIFIcon)
DECLARE_FXDRAWABLE_VIRTUALS(FXGIFIcon)
DECLARE_FXIMAGE_VIRTUALS(FXGIFIcon)

