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

class FXImage;


/**
* A color wheel is a widget which controls a color by means
* of the hue, saturation, value color specification system.
*/
class FXColorWheel : public FXFrame {
protected:
  FXImage  *dial;         // HSV dial image
  FXfloat   hsv[3];       // Hue, saturation, value
  FXint     dialx;        // Dial x location
  FXint     dialy;        // Dial Y location
  FXint     spotx;        // Spot x location
  FXint     spoty;        // Spot Y location
  FXString  tip;          // Tooltip value
  FXString  help;         // Help value
protected:
  FXColorWheel();
  void updatedial();
  void movespot(FXint x,FXint y);
  FXbool hstoxy(FXint& x,FXint& y,FXfloat h,FXfloat s) const;
  FXbool xytohs(FXfloat& h,FXfloat& s,FXint x,FXint y) const;
public:
  long onPaint(FXObject*,FXSelector,void* PTR_EVENT);
  long onLeftBtnPress(FXObject*,FXSelector,void* PTR_EVENT);
  long onLeftBtnRelease(FXObject*,FXSelector,void* PTR_EVENT);
  long onMotion(FXObject*,FXSelector,void* PTR_EVENT);
  long onMouseWheel(FXObject*,FXSelector,void* PTR_EVENT);
  long onCmdSetHelp(FXObject*,FXSelector,void* PTR_STRING);
  long onCmdGetHelp(FXObject*,FXSelector,void* PTR_IGNORE); // FIXME
  long onCmdSetTip(FXObject*,FXSelector,void* PTR_STRING);
  long onCmdGetTip(FXObject*,FXSelector,void* PTR_IGNORE); // FIXME
  long onQueryHelp(FXObject*,FXSelector,void* PTR_IGNORE);
  long onQueryTip(FXObject*,FXSelector,void* PTR_IGNORE);
public:
  %extend {
    /// Construct color wheel with initial color clr
    FXColorWheel(FXComposite* p,FXObject* tgt=NULL,FXSelector sel=0,FXuint opts=FRAME_NORMAL,FXint x=0,FXint y=0,FXint w=0,FXint h=0,FXint pl=DEFAULT_PAD,FXint pr=DEFAULT_PAD,FXint pt=DEFAULT_PAD,FXint pb=DEFAULT_PAD){
      return new FXRbColorWheel(p,tgt,sel,opts,x,y,w,h,pl,pr,pt,pb);
      }
    }

  /// Change hue
  void setHue(FXfloat h);
  
  /// Return hue 
  FXfloat getHue() const;

  /// Change saturation
  void setSat(FXfloat s);
  
  /// Return saturation 
  FXfloat getSat() const;

  /// Change value
  void setVal(FXfloat v);
  
  /// Return value 
  FXfloat getVal() const;

  /// Set hue, saturation, value
  void setHueSatVal(FXfloat h,FXfloat s,FXfloat v);

  /// Set status line help text for this color well
  void setHelpText(const FXString& text);

  /// Get status line help text for this color well
  const FXString& getHelpText() const;

  /// Set tool tip message for this color well
  void setTipText(const FXString& text);

  /// Get tool tip message for this color well
  const FXString& getTipText() const;

  /// Destructor
  virtual ~FXColorWheel();
  };


DECLARE_FXOBJECT_VIRTUALS(FXColorWheel)
DECLARE_FXID_VIRTUALS(FXColorWheel)
DECLARE_FXDRAWABLE_VIRTUALS(FXColorWheel)
DECLARE_FXWINDOW_VIRTUALS(FXColorWheel)

