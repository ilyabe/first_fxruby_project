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


/// X Pixmap image
class FXXPMImage : public FXImage {
protected:
  FXXPMImage(){}
public:
  %extend {
    static VALUE fileExt() {
      return rb_str_new2(FXXPMImage::fileExt);
      }

    static VALUE mimeType() {
      return rb_str_new2(FXXPMImage::mimeType);
      }
    }
public:
  
  /// Construct image from compiled-in X Pixmap format
  %extend {
    FXXPMImage(FXApp* a,const FXchar **pix=NULL,FXuint opts=0,FXint w=1,FXint h=1){
      return new FXRbXPMImage(a,pix,opts,w,h);
      }
    }

  /// Destroy icon
  virtual ~FXXPMImage();
  };


DECLARE_FXOBJECT_VIRTUALS(FXXPMImage)
DECLARE_FXID_VIRTUALS(FXXPMImage)
DECLARE_FXDRAWABLE_VIRTUALS(FXXPMImage)
DECLARE_FXIMAGE_VIRTUALS(FXXPMImage)

