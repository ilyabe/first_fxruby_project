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
* A delegator forwards messages to a delegate object.
* Delegators are used when you need to multiplex messages
* toward any number of target objects.  
* For example, many controls may be connected to FXDelegator,
* instead of directly to the document object.  Changing the
* delegate in FXDelegator will then reconnect the controls with their
* new target.
*/
class FXDelegator : public FXObject {
protected:
  FXObject   *delegate;
public:
  %extend {  
    /// Construct a delegator 
    FXDelegator(FXObject* target=NULL){
      return new FXRbDelegator(target);
      }
    }

  /// Return delegate object
  FXObject* getDelegate() const;

  /// Change delegate object
  void setDelegate(FXObject* target);

  /// Always trash during detroy
  virtual ~FXDelegator();
  };


DECLARE_FXOBJECT_VIRTUALS(FXDelegator)

