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


/**
* A drag corner widget may be placed in the bottom right corner
* so as to allow the window to be resized more easily.
*/
class FXDragCorner : public FXWindow {
protected:
  FXColor hiliteColor;
  FXColor shadowColor;
  FXint   oldw;
  FXint   oldh;
  FXint   xoff;
  FXint   yoff;
protected:
  FXDragCorner();
public:
  long onPaint(FXObject*,FXSelector,void* PTR_EVENT);
  long onLeftBtnPress(FXObject*,FXSelector,void* PTR_EVENT);
  long onLeftBtnRelease(FXObject*,FXSelector,void* PTR_EVENT);
  long onMotion(FXObject*,FXSelector,void* PTR_EVENT);
public:
  %extend {
    /// Construct a drag corner
    FXDragCorner(FXComposite* p){
      return new FXRbDragCorner(p);
      }
    }

  /// Change highlight color
  void setHiliteColor(FXColor clr);
  
  /// Return current highlight color
  FXColor getHiliteColor() const;

  /// Change shadow color
  void setShadowColor(FXColor clr);
  
  /// Return current shadow color
  FXColor getShadowColor() const;
  
  /// Destructor
  virtual ~FXDragCorner();
  };


DECLARE_FXOBJECT_VIRTUALS(FXDragCorner)
DECLARE_FXID_VIRTUALS(FXDragCorner)
DECLARE_FXDRAWABLE_VIRTUALS(FXDragCorner)
DECLARE_FXWINDOW_VIRTUALS(FXDragCorner)

