//---------------------------------------------------------------------------

#pragma hdrstop

#include "Unit2.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)




void DrawLine(int SizeOfSquare, int Width ,TBitmap *Bitmap,TCanvas *Can)
{
	Bitmap->Canvas->Brush->Color=clBlack;
	Bitmap->Canvas->Pen->Width=2;
	Bitmap->Canvas->Pen->Color=clWhite;
	Bitmap->Width=Width;
	Bitmap->Height=Width;

	for (int i = 1; i < Width; i=i+SizeOfSquare)
	{
		Bitmap->Canvas->MoveTo(i,1);
		Bitmap->Canvas->LineTo(i,Width);
	}

	for (int i = 1; i < Width; i=i+SizeOfSquare)
	{
		Bitmap->Canvas->MoveTo(1,i);
		Bitmap->Canvas->LineTo(Width,i);
	}

	Can->Draw(0,0,Bitmap);
}