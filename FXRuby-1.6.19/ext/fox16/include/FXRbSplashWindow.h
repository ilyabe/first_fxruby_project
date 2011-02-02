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

/***********************************************************************
 * $Id: FXRbSplashWindow.h 2190 2005-08-24 07:58:47Z lyle $
 ***********************************************************************/

#ifndef FXRBSPLASHWINDOW_H
#define FXRBSPLASHWINDOW_H

// Main window class
class FXRbSplashWindow : public FXSplashWindow {
  FXDECLARE(FXRbSplashWindow)
protected:
  FXRbSplashWindow(){}
#include "FXRbObjectVirtuals.h"
#include "FXRbIdVirtuals.h"
#include "FXRbDrawableVirtuals.h"
#include "FXRbWindowVirtuals.h"
#include "FXRbTopWindowVirtuals.h"
public:
  // Constructor
  FXRbSplashWindow(FXApp* ap,FXIcon* ic,FXuint opts=SPLASH_SIMPLE,FXuint ms=5000) : FXSplashWindow(ap,ic,opts,ms){}

  // Constructor
  FXRbSplashWindow(FXWindow *ow,FXIcon* ic,FXuint opts=SPLASH_SIMPLE,FXuint ms=5000) : FXSplashWindow(ow,ic,opts,ms){}

  // Mark dependencies for the GC
  static void markfunc(FXSplashWindow *self);

  // Destructor
  virtual ~FXRbSplashWindow(){
    FXRbUnregisterRubyObj(this);
    }
  };

#endif

