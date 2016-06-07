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
#include <conio.h>
#include <string.h>
#include <iostream>
#include <Vcl.Dialogs.hpp>




void DrawImage(int X, int Y, int SizeOfSquare,TBitmap *Bitmap,TBitmap *Squar);
void DrawMassWithUndangerPlaners(int **MassFirst, int SizeOfMass, int SizeOfSquare,TBitmap *Bitmap,TColor FonColor,TColor SquareColor,TColor PlanerColor);
void DrawLine(int SizeOfSquare, int Width ,TBitmap *Bitmap,TCanvas *Can,TColor Clr);
void Life(int **MassFirst, int **MassSecond,int SizeOfMass);
void DrawSquare(TColor Clr,int X, int Y, int SizeOfSquare,TBitmap *Bitmap);
void Clear(int **MassFirst,int **MassSecond,int SizeOfSquare,int SizeOfMass,TBitmap *Bitmap,TCanvas *Can,TColor FonColor);
void DrawMass(int **MassFirst, int SizeOfMass, int SizeOfSquare  ,TBitmap *Bitmap,TColor FonColor, TColor SquareColor);
void DrawMassWithPlaners(int **MassFirst, int SizeOfMass, int SizeOfSquare,TBitmap *Bitmap,TColor FonColor,TColor SquareColor,TColor PlanerColor);
void DrawMassWithUndangerPlanersAndImage(int **MassFirst, int SizeOfMass, int SizeOfSquare,TBitmap *Bitmap,TColor FonColor,TBitmap *Squar, TBitmap *Planer);
void CreateMass(int **MassFirst, int **MassSecond, int SizeOfMass);





#endif





