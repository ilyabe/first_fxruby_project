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
 * $Id: FXRbTranslator.h 2303 2005-12-09 03:17:28Z lyle $
 ***********************************************************************/

#ifndef FXRBTRANSLATOR_H
#define FXRBTRANSLATOR_H

#define DECLARE_FXTRANSLATOR_STUBS(klass) \
inline const FXchar* klass ## _tr(const klass* self,const FXchar* context,const FXchar* message,const FXchar* hint){ \
  return self->klass::tr(context,message,hint); \
  }


#define IMPLEMENT_FXTRANSLATOR_STUBS(cls) \
  const FXchar* cls::tr(const FXchar* context,const FXchar* message,const FXchar* hint) const { \
    return FXRbCallCStringMethod(this,rb_intern("tr"),context,message,hint); \
    }

class FXRbTranslator : public FXTranslator {
  FXDECLARE(FXRbTranslator)
protected:
  FXRbTranslator(){}
#include "FXRbObjectVirtuals.h"
#include "FXRbTranslatorVirtuals.h"
public:
  // Default constructor
  FXRbTranslator(FXApp* a) : FXTranslator(a){
    }

  // Mark dependencies for the GC
  static void markfunc(FXTranslator* t);

  // Destructor
  virtual ~FXRbTranslator(){
    FXRbUnregisterRubyObj(this);
    }
  };

#endif
