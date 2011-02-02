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
 * $Id: FXRbDial.h 2190 2005-08-24 07:58:47Z lyle $
 ***********************************************************************/

#ifndef FXRBDIAL_H
#define FXRBDIAL_H

class FXRbDial : public FXDial {
  FXDECLARE(FXRbDial)
protected:
  FXRbDial(){}
#include "FXRbObjectVirtuals.h"
#include "FXRbIdVirtuals.h"
#include "FXRbDrawableVirtuals.h"
#include "FXRbWindowVirtuals.h"
public:
  /// Construct a dial widget
  FXRbDial(FXComposite *p,FXObject* tgt=NULL,FXSelector sel=0,FXuint opts=DIAL_NORMAL,FXint x=0,FXint y=0,FXint w=0,FXint h=0,FXint pl=DEFAULT_PAD,FXint pr=DEFAULT_PAD,FXint pt=DEFAULT_PAD,FXint pb=DEFAULT_PAD) : FXDial(p,tgt,sel,opts,x,y,w,h,pl,pr,pt,pb){}

  // Mark dependencies for the GC
  static void markfunc(FXDial* self);

  // Destructor
  virtual ~FXRbDial(){
    FXRbUnregisterRubyObj(this);
    }
  };

#endif
