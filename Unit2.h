//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <stdio.h>



void DrawLine(int SizeOfSquare, int Width ,TBitmap *Bitmap,TCanvas *Can);
void Life(int **MassFirst, int **MassSecond,int SizeOfMass);
void DrawSquare(TColor Clr,int X, int Y, int SizeOfSquare,TBitmap *Bitmap);
void Clear(int **MassFirst,int **MassSecond,int SizeOfSquare,int SizeOfMass,TBitmap *Bitmap,TCanvas *Can);
void DrawMass(int **MassFirst, int SizeOfMass, int SizeOfSquare  ,TBitmap *Bitmap);







#endif





