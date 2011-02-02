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
 * $Id: FXRbDC.h 2823 2008-03-28 02:04:22Z lyle $
 ***********************************************************************/

#ifndef FXRBDC_H
#define FXRBDC_H

#define DECLARE_FXDC_STUBS(klass) \
inline FXColor klass ## _readPixel(klass* self,FXint x,FXint y){ \
  return self->klass::readPixel(x,y); \
  } \
inline void klass ## _drawPoint(klass* self,FXint x,FXint y){ \
  self->klass::drawPoint(x,y); \
  } \
inline void klass ## _drawPoints(klass* self,const FXPoint* points,FXuint npoints){ \
  self->klass::drawPoints(points,npoints); \
  } \
inline void klass ## _drawPointsRel(klass* self,const FXPoint* points,FXuint npoints){ \
  self->klass::drawPointsRel(points,npoints); \
  } \
inline void klass ## _drawLine(klass* self,FXint x1,FXint y1,FXint x2,FXint y2){ \
  self->klass::drawLine(x1,y1,x2,y2); \
  } \
inline void klass ## _drawLines(klass* self,const FXPoint* points,FXuint npoints){ \
  self->klass::drawLines(points,npoints); \
  } \
inline void klass ## _drawLinesRel(klass* self,const FXPoint* points,FXuint npoints){ \
  self->klass::drawLinesRel(points,npoints); \
  } \
inline void klass ## _drawLineSegments(klass* self,const FXSegment* segments,FXuint nsegments){ \
  self->klass::drawLineSegments(segments,nsegments); \
  } \
inline void klass ## _drawRectangle(klass* self,FXint x,FXint y,FXint w,FXint h){ \
  self->klass::drawRectangle(x,y,w,h); \
  } \
inline void klass ## _drawRectangles(klass* self,const FXRectangle* rectangles,FXuint nrectangles){ \
  self->klass::drawRectangles(rectangles,nrectangles); \
  } \
inline void klass ## _drawRoundRectangle(klass* self,FXint x,FXint y,FXint w,FXint h,FXint ew,FXint eh){ \
  self->klass::drawRoundRectangle(x,y,w,h,ew,eh); \
  } \
inline void klass ## _drawArc(klass* self,FXint x,FXint y,FXint w,FXint h,FXint ang1,FXint ang2){ \
  self->klass::drawArc(x,y,w,h,ang1,ang2); \
  } \
inline void klass ## _drawArcs(klass* self,const FXArc* arcs,FXuint narcs){ \
  self->klass::drawArcs(arcs,narcs); \
  } \
inline void klass ## _drawEllipse(klass* self,FXint x,FXint y,FXint w,FXint h){ \
  self->klass::drawEllipse(x,y,w,h); \
  } \
inline void klass ## _fillRectangle(klass* self,FXint x,FXint y,FXint w,FXint h){ \
  self->klass::fillRectangle(x,y,w,h); \
  } \
inline void klass ## _fillRectangles(klass* self,const FXRectangle* rectangles,FXuint nrectangles){ \
  self->klass::fillRectangles(rectangles,nrectangles); \
  } \
inline void klass ## _fillRoundRectangle(klass* self,FXint x,FXint y,FXint w,FXint h,FXint ew,FXint eh){ \
  self->klass::fillRoundRectangle(x,y,w,h,ew,eh); \
  } \
inline void klass ## _fillChord(klass* self,FXint x,FXint y,FXint w,FXint h,FXint ang1,FXint ang2){ \
  self->klass::fillChord(x,y,w,h,ang1,ang2); \
  } \
inline void klass ## _fillChords(klass* self,const FXArc* chords,FXuint nchords){ \
  self->klass::fillChords(chords,nchords); \
  } \
inline void klass ## _fillArc(klass* self,FXint x,FXint y,FXint w,FXint h,FXint ang1,FXint ang2){ \
  self->klass::fillArc(x,y,w,h,ang1,ang2); \
  } \
inline void klass ## _fillArcs(klass* self,const FXArc* arcs,FXuint narcs){ \
  self->klass::fillArcs(arcs,narcs); \
  } \
inline void klass ## _fillEllipse(klass* self,FXint x,FXint y,FXint w,FXint h){ \
  self->klass::fillEllipse(x,y,w,h); \
  } \
inline void klass ## _fillPolygon(klass* self,const FXPoint* points,FXuint npoints){ \
  self->klass::fillPolygon(points,npoints); \
  } \
inline void klass ## _fillConcavePolygon(klass* self,const FXPoint* points,FXuint npoints){ \
  self->klass::fillConcavePolygon(points,npoints); \
  } \
inline void klass ## _fillComplexPolygon(klass* self,const FXPoint* points,FXuint npoints){ \
  self->klass::fillComplexPolygon(points,npoints); \
  } \
inline void klass ## _fillPolygonRel(klass* self,const FXPoint* points,FXuint npoints){ \
  self->klass::fillPolygonRel(points,npoints); \
  } \
inline void klass ## _fillConcavePolygonRel(klass* self,const FXPoint* points,FXuint npoints){ \
  self->klass::fillConcavePolygonRel(points,npoints); \
  } \
inline void klass ## _fillComplexPolygonRel(klass* self,const FXPoint* points,FXuint npoints){ \
  self->klass::fillComplexPolygonRel(points,npoints); \
  } \
inline void klass ## _drawHashBox(klass* self,FXint x,FXint y,FXint w,FXint h,FXint b=1){ \
  self->klass::drawHashBox(x,y,w,h,b); \
  } \
inline void klass ## _drawFocusRectangle(klass* self,FXint x,FXint y,FXint w,FXint h){ \
  self->klass::drawFocusRectangle(x,y,w,h); \
  } \
inline void klass ## _drawArea(klass* self,const FXDrawable* source,FXint sx,FXint sy,FXint sw,FXint sh,FXint dx,FXint dy){ \
  self->klass::drawArea(source,sx,sy,sw,sh,dx,dy); \
  } \
inline void klass ## _drawArea(klass* self,const FXDrawable* source,FXint sx,FXint sy,FXint sw,FXint sh,FXint dx,FXint dy,FXint dw,FXint dh){ \
  self->klass::drawArea(source,sx,sy,sw,sh,dx,dy,dw,dh); \
  } \
inline void klass ## _drawImage(klass* self,const FXImage* image,FXint dx,FXint dy){ \
  self->klass::drawImage(image,dx,dy); \
  } \
inline void klass ## _drawBitmap(klass* self,const FXBitmap* bitmap,FXint dx,FXint dy){ \
  self->klass::drawBitmap(bitmap,dx,dy); \
  } \
inline void klass ## _drawIcon(klass* self,const FXIcon* icon,FXint dx,FXint dy){ \
  self->klass::drawIcon(icon,dx,dy); \
  } \
inline void klass ## _drawIconShaded(klass* self,const FXIcon* icon,FXint dx,FXint dy){ \
  self->klass::drawIconShaded(icon,dx,dy); \
  } \
inline void klass ## _drawIconSunken(klass* self,const FXIcon* icon,FXint dx,FXint dy){ \
  self->klass::drawIconSunken(icon,dx,dy); \
  } \
inline void klass ## _drawText(klass* self,FXint x,FXint y,const FXString& string){ \
  self->klass::drawText(x,y,string); \
  } \
inline void klass ## _drawText(klass* self,FXint x,FXint y,const FXchar* string,FXuint length){ \
  self->klass::drawText(x,y,string,length); \
  } \
inline void klass ## _drawImageText(klass* self,FXint x,FXint y,const FXString& string){ \
  self->klass::drawImageText(x,y,string); \
  } \
inline void klass ## _drawImageText(klass* self,FXint x,FXint y,const FXchar* string,FXuint length){ \
  self->klass::drawImageText(x,y,string,length); \
  } \
inline void klass ## _setForeground(klass* self,FXColor clr){ \
  self->klass::setForeground(clr); \
  } \
inline void klass ## _setBackground(klass* self,FXColor clr){ \
  self->klass::setBackground(clr); \
  } \
inline void klass ## _setDashes(klass* self,FXuint dashoffset,const FXchar *dashpattern,FXuint dashlength){ \
  self->klass::setDashes(dashoffset,dashpattern,dashlength); \
  } \
inline void klass ## _setLineWidth(klass* self,FXuint linewidth){ \
  self->klass::setLineWidth(linewidth); \
  } \
inline void klass ## _setLineCap(klass* self,FXCapStyle capstyle){ \
  self->klass::setLineCap(capstyle); \
  } \
inline void klass ## _setLineJoin(klass* self,FXJoinStyle joinstyle){ \
  self->klass::setLineJoin(joinstyle); \
  } \
inline void klass ## _setLineStyle(klass* self,FXLineStyle linestyle){ \
  self->klass::setLineStyle(linestyle); \
  } \
inline void klass ## _setFillStyle(klass* self,FXFillStyle fillstyle){ \
  self->klass::setFillStyle(fillstyle); \
  } \
inline void klass ## _setFillRule(klass* self,FXFillRule fillrule){ \
  self->klass::setFillRule(fillrule); \
  } \
inline void klass ## _setFunction(klass* self,FXFunction func){ \
  self->klass::setFunction(func); \
  } \
inline void klass ## _setTile(klass* self,FXImage* image,FXint dx,FXint dy){ \
  self->klass::setTile(image,dx,dy); \
  } \
inline void klass ## _setStipple(klass* self,FXBitmap *bitmap,FXint dx,FXint dy){ \
  self->klass::setStipple(bitmap,dx,dy); \
  } \
inline void klass ## _setStipple(klass* self,FXStipplePattern pat,FXint dx,FXint dy){ \
  self->klass::setStipple(pat,dx,dy); \
  } \
inline void klass ## _setClipRegion(klass* self,const FXRegion& region){ \
  self->klass::setClipRegion(region); \
  } \
inline void klass ## _setClipRectangle(klass* self,FXint x,FXint y,FXint w,FXint h){ \
  self->klass::setClipRectangle(x,y,w,h); \
  } \
inline void klass ## _setClipRectangle(klass* self,const FXRectangle& rectangle){ \
  self->klass::setClipRectangle(rectangle); \
  } \
inline void klass ## _clearClipRectangle(klass* self){ \
  self->klass::clearClipRectangle(); \
  } \
inline void klass ## _setClipMask(klass* self,FXBitmap* bitmap,FXint dx,FXint dy){ \
  self->klass::setClipMask(bitmap,dx,dy); \
  } \
inline void klass ## _clearClipMask(klass* self){ \
  self->klass::clearClipMask(); \
  } \
inline void klass ## _setFont(klass* self,FXFont *fnt){ \
  self->klass::setFont(fnt); \
  } \
inline void klass ## _clipChildren(klass* self,FXbool yes){ \
  self->klass::clipChildren(yes); \
  }


#define IMPLEMENT_FXDC_STUBS(cls) \
  FXColor cls::readPixel(FXint x,FXint y){ \
    return FXRbCallColorMethod(this,rb_intern("readPixel"),x,y); \
    } \
  void cls::drawPoint(FXint x,FXint y){ \
    FXRbCallVoidMethod(this,rb_intern("drawPoint"),x,y); \
    } \
  void cls::drawPoints(const FXPoint* points,FXuint npoints){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("drawPoints"),1,FXRbMakeArray(points,npoints)); \
    } \
  void cls::drawPointsRel(const FXPoint* points,FXuint npoints){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("drawPointsRel"),1,FXRbMakeArray(points,npoints)); \
    } \
  void cls::drawLine(FXint x1,FXint y1,FXint x2,FXint y2){ \
    FXRbCallVoidMethod(this,rb_intern("drawLine"),x1,y1,x2,y2); \
    } \
  void cls::drawLines(const FXPoint* points,FXuint npoints){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("drawLines"),1,FXRbMakeArray(points,npoints)); \
    } \
  void cls::drawLinesRel(const FXPoint* points,FXuint npoints){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("drawLinesRel"),1,FXRbMakeArray(points,npoints)); \
    } \
  void cls::drawLineSegments(const FXSegment* segments,FXuint nsegments){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("drawLineSegments"),1,FXRbMakeArray(segments,nsegments)); \
    } \
  void cls::drawRectangle(FXint x,FXint y,FXint w,FXint h){ \
    FXRbCallVoidMethod(this,rb_intern("drawRectangle"),x,y,w,h); \
    } \
  void cls::drawRoundRectangle(FXint x,FXint y,FXint w,FXint h,FXint ew,FXint eh){ \
    FXRbCallVoidMethod(this,rb_intern("drawRoundRectangle"),x,y,w,h,ew,eh); \
    } \
  void cls::drawRectangles(const FXRectangle* rectangles,FXuint nrectangles){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("drawRectangles"),1,FXRbMakeArray(rectangles,nrectangles)); \
    } \
  void cls::drawArc(FXint x,FXint y,FXint w,FXint h,FXint ang1,FXint ang2){ \
    FXRbCallVoidMethod(this,rb_intern("drawArc"),x,y,w,h,ang1,ang2); \
    } \
  void cls::drawArcs(const FXArc* arcs,FXuint narcs){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("drawArcs"),1,FXRbMakeArray(arcs,narcs)); \
    } \
  void cls::drawEllipse(FXint x,FXint y,FXint w,FXint h){ \
    FXRbCallVoidMethod(this,rb_intern("drawEllipse"),x,y,w,h); \
    } \
  void cls::fillRectangle(FXint x,FXint y,FXint w,FXint h){ \
    FXRbCallVoidMethod(this,rb_intern("fillRectangle"),x,y,w,h); \
    } \
  void cls::fillRectangles(const FXRectangle* rectangles,FXuint nrectangles){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("fillRectangles"),1,FXRbMakeArray(rectangles,nrectangles)); \
    } \
  void cls::fillRoundRectangle(FXint x,FXint y,FXint w,FXint h,FXint ew,FXint eh){ \
    FXRbCallVoidMethod(this,rb_intern("fillRoundRectangle"),x,y,w,h,ew,eh); \
    } \
  void cls::fillChord(FXint x,FXint y,FXint w,FXint h,FXint ang1,FXint ang2){ \
    FXRbCallVoidMethod(this,rb_intern("fillChord"),x,y,w,h,ang1,ang2); \
    } \
  void cls::fillChords(const FXArc* chords,FXuint nchords){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("fillChords"),1,FXRbMakeArray(chords,nchords)); \
    } \
  void cls::fillArc(FXint x,FXint y,FXint w,FXint h,FXint ang1,FXint ang2){ \
    FXRbCallVoidMethod(this,rb_intern("fillArc"),x,y,w,h,ang1,ang2); \
    } \
  void cls::fillArcs(const FXArc* arcs,FXuint narcs){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("fillArcs"),1,FXRbMakeArray(arcs,narcs)); \
    } \
  void cls::fillEllipse(FXint x,FXint y,FXint w,FXint h){ \
    FXRbCallVoidMethod(this,rb_intern("fillEllipse"),x,y,w,h); \
    } \
  void cls::fillPolygon(const FXPoint* points,FXuint npoints){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("fillPolygon"),1,FXRbMakeArray(points,npoints)); \
    } \
  void cls::fillConcavePolygon(const FXPoint* points,FXuint npoints){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("fillConcavePolygon"),1,FXRbMakeArray(points,npoints)); \
    } \
  void cls::fillComplexPolygon(const FXPoint* points,FXuint npoints){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("fillComplexPolygon"),1,FXRbMakeArray(points,npoints)); \
    } \
  void cls::fillPolygonRel(const FXPoint* points,FXuint npoints){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("fillPolygonRel"),1,FXRbMakeArray(points,npoints)); \
    } \
  void cls::fillConcavePolygonRel(const FXPoint* points,FXuint npoints){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("fillConcavePolygonRel"),1,FXRbMakeArray(points,npoints)); \
    } \
  void cls::fillComplexPolygonRel(const FXPoint* points,FXuint npoints){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("fillComplexPolygonRel"),1,FXRbMakeArray(points,npoints)); \
    } \
  void cls::drawHashBox(FXint x,FXint y,FXint w,FXint h,FXint b){ \
    FXRbCallVoidMethod(this,rb_intern("drawHashBox"),x,y,w,h,b); \
    } \
  void cls::drawFocusRectangle(FXint x,FXint y,FXint w,FXint h){ \
    FXRbCallVoidMethod(this,rb_intern("drawFocusRectangle"),x,y,w,h); \
    } \
  void cls::drawArea(const FXDrawable* source,FXint sx,FXint sy,FXint sw,FXint sh,FXint dx,FXint dy){ \
    FXRbCallVoidMethod(this,rb_intern("drawArea"),source,sx,sy,sw,sh,dx,dy); \
    } \
  void cls::drawArea(const FXDrawable* source,FXint sx,FXint sy,FXint sw,FXint sh,FXint dx,FXint dy,FXint dw,FXint dh){ \
    FXRbCallVoidMethod(this,rb_intern("drawArea"),source,sx,sy,sw,sh,dx,dy,dw,dh); \
    } \
  void cls::drawImage(const FXImage* image,FXint dx,FXint dy){ \
    FXRbCallVoidMethod(this,rb_intern("drawImage"),image,dx,dy); \
    } \
  void cls::drawBitmap(const FXBitmap* bitmap,FXint dx,FXint dy){ \
    FXRbCallVoidMethod(this,rb_intern("drawBitmap"),bitmap,dx,dy); \
    } \
  void cls::drawIcon(const FXIcon* icon,FXint dx,FXint dy){ \
    FXRbCallVoidMethod(this,rb_intern("drawIcon"),icon,dx,dy); \
    } \
  void cls::drawIconShaded(const FXIcon* icon,FXint dx,FXint dy){ \
    FXRbCallVoidMethod(this,rb_intern("drawIconShaded"),icon,dx,dy); \
    } \
  void cls::drawIconSunken(const FXIcon* icon,FXint dx,FXint dy){ \
    FXRbCallVoidMethod(this,rb_intern("drawIconSunken"),icon,dx,dy); \
    } \
  void cls::drawText(FXint x,FXint y,const FXString& string){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("drawText"),3,to_ruby(x),to_ruby(y),rb_str_new(string.text(),string.length())); \
    } \
  void cls::drawText(FXint x,FXint y,const FXchar* string,FXuint length){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("drawText"),3,to_ruby(x),to_ruby(y),rb_str_new(string,length)); \
    } \
  void cls::drawImageText(FXint x,FXint y,const FXString& string){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("drawImageText"),3,to_ruby(x),to_ruby(y),rb_str_new(string.text(),string.length())); \
    } \
  void cls::drawImageText(FXint x,FXint y,const FXchar* string,FXuint length){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("drawImageText"),3,to_ruby(x),to_ruby(y),rb_str_new(string,length)); \
    } \
  void cls::setForeground(FXColor clr){ \
    FXRbCallVoidMethod(this,rb_intern("setForeground"),clr); \
    } \
  void cls::setBackground(FXColor clr){ \
    FXRbCallVoidMethod(this,rb_intern("setBackground"),clr); \
    } \
  void cls::setDashes(FXuint dashoffset,const FXchar *dashpattern,FXuint dashlength){ \
    rb_funcall(FXRbGetRubyObj(this,false),rb_intern("setDashes"),2,to_ruby(dashoffset),FXRbMakeArray(dashpattern,dashlength)); \
    } \
  void cls::setLineWidth(FXuint linewidth){ \
    FXRbCallVoidMethod(this,rb_intern("setLineWidth"),linewidth); \
    } \
  void cls::setLineCap(FXCapStyle capstyle){ \
    FXRbCallVoidMethod(this,rb_intern("setLineCap"),capstyle); \
    } \
  void cls::setLineJoin(FXJoinStyle joinstyle){ \
    FXRbCallVoidMethod(this,rb_intern("setLineJoin"),joinstyle); \
    } \
  void cls::setLineStyle(FXLineStyle linestyle){ \
    FXRbCallVoidMethod(this,rb_intern("setLineStyle"),linestyle); \
    } \
  void cls::setFillStyle(FXFillStyle fillstyle){ \
    FXRbCallVoidMethod(this,rb_intern("setFillStyle"),fillstyle); \
    } \
  void cls::setFillRule(FXFillRule fillrule){ \
    FXRbCallVoidMethod(this,rb_intern("setFillRule"),fillrule); \
    } \
  void cls::setFunction(FXFunction func){ \
    FXRbCallVoidMethod(this,rb_intern("setFunction"),func); \
    } \
  void cls::setTile(FXImage* image,FXint dx,FXint dy){ \
    FXRbCallVoidMethod(this,rb_intern("setTile"),image,dx,dy); \
    } \
  void cls::setStipple(FXBitmap *bitmap,FXint dx,FXint dy){ \
    FXRbCallVoidMethod(this,rb_intern("setStipple"),bitmap,dx,dy); \
    } \
  void cls::setStipple(FXStipplePattern pat,FXint dx,FXint dy){ \
    FXRbCallVoidMethod(this,rb_intern("setStipple"),pat,dx,dy); \
    } \
  void cls::setClipRegion(const FXRegion& region){ \
    FXRbCallVoidMethod(this,rb_intern("setClipRegion"),region); \
    } \
  void cls::setClipRectangle(FXint x,FXint y,FXint w,FXint h){ \
    FXRbCallVoidMethod(this,rb_intern("setClipRectangle"),x,y,w,h); \
    } \
  void cls::setClipRectangle(const FXRectangle& rectangle){ \
    FXRbCallVoidMethod(this,rb_intern("setClipRectangle"),rectangle); \
    } \
  void cls::clearClipRectangle(){ \
    FXRbCallVoidMethod(this,rb_intern("clearClipRectangle")); \
    } \
  void cls::setClipMask(FXBitmap* bitmap,FXint dx,FXint dy){ \
    FXRbCallVoidMethod(this,rb_intern("setClipMask"),bitmap,dx,dy); \
    } \
  void cls::clearClipMask(){ \
    FXRbCallVoidMethod(this,rb_intern("clearClipMask")); \
    } \
  void cls::setFont(FXFont *fnt){ \
    FXRbCallVoidMethod(this,rb_intern("setFont"),fnt); \
    } \
  void cls::clipChildren(FXbool yes){ \
    FXRbCallVoidMethod(this,rb_intern("clipChildren"),yes); \
    }


class FXRbDC : public FXDC {
#include "FXRbDCVirtuals.h"
public:
  // Constructor
  FXRbDC(FXApp* app) : FXDC(app){
    FXRbRegisterAppSensitiveObject(this);
    }

  // Mark dependencies for the GC
  static void markfunc(FXDC* self);

  // Destructor
  virtual ~FXRbDC(){
    FXTRACE((100,"FXRbDC::~FXRbDC() %p\n",this));
    FXRbUnregisterRubyObj(this);
    FXRbUnregisterAppSensitiveObject(this);
    }
  };

#endif
