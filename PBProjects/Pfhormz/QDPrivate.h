//
//  QDPrivate.h
//  Pfhormz
//
//  Created by C.W. Betts on 8/15/15.
//
//

#ifndef QDPrivate_h
#define QDPrivate_h

//Where the QuickDraw framework resides
#include <ApplicationServices/ApplicationServices.h>

#if defined(QD_HEADERS_ARE_PRIVATE) && QD_HEADERS_ARE_PRIVATE

enum {
	blackColor		= 33,   /*colors expressed in these mappings*/
	whiteColor		= 30,
	redColor		= 205,
	greenColor		= 341,
	blueColor		= 409,
	cyanColor		= 273,
	magentaColor	= 137,
	yellowColor		= 69
};


#if TARGET_OS_MAC
#define MacInvertRect InvertRect
#define MacOffsetRect OffsetRect
#define MacSetRect SetRect
#define MacPtInRect PtInRect
#define MacLineTo LineTo
#define MacFillRect FillRect
#define MacSetPort SetPort
#define MacGetCursor GetCursor
#define MacSetCursor SetCursor
#define MacFrameRect FrameRect
#define MacUnionRgn UnionRgn
#define MacShowCursor ShowCursor
#define MacCopyRgn CopyRgn
#define MacInsetRect InsetRect
#define MacEqualRect EqualRect
#define MacOffsetRgn OffsetRgn
#define MacInvertRgn InvertRgn
#define MacPaintRgn PaintRgn
#endif


extern void InitCursor(void);
extern RgnHandle NewRgn();
extern void RectRgn(RgnHandle, const Rect *);
extern void MacUnionRgn(RgnHandle, RgnHandle, RgnHandle);
extern void DisposeRgn(RgnHandle);
extern void DiffRgn(RgnHandle, RgnHandle, RgnHandle);
extern void RGBForeColor(const RGBColor *);
extern void MacPaintRgn(RgnHandle);
extern Rect *GetPortBounds(CGrafPtr, Rect *);
extern void ForeColor(long);
extern void GetPort(GrafPtr *);
extern void MacSetPort(GrafPtr);
extern void LocalToGlobal(Point *);
extern long GetCTSeed(void);
#endif

#endif /* QDPrivate_h */
