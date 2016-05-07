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




void Life(int **MassFirst, int **MassSecond,int SizeOfMass)
{
	int iw;
	int jw;
	int i;
	int j;
	int Square;

	for (i = 0; i < SizeOfMass; i++)
	{
		for (j = 0; j < SizeOfMass; j++)
		{
			MassSecond[i][j]=MassFirst[i][j];
		}

	}


	for (i = 0; i < SizeOfMass; i++)
	{
		for (j = 0; j < SizeOfMass; j++)
		{
			Square=0;

				iw=i;
				jw=j+1;

				if (iw==SizeOfMass)
				{
					iw=0;
				}
				if (jw==SizeOfMass)
				{
					jw=0;
				}
				if (iw==-1)
				{
					iw=SizeOfMass-1;
				}
				if (jw==-1)
				{
					jw=SizeOfMass-1;
				}
				if (MassFirst[iw][jw]==1)
				{
					Square++;
				}


				iw=i+1;
				jw=j+1;
				if (iw==SizeOfMass)
				{
					iw=0;
				}
				if (jw==SizeOfMass)
				{
					jw=0;
				}
				if (iw==-1)
				{
					iw=SizeOfMass-1;
				}
				if (jw==-1)
				{
					jw=SizeOfMass-1;
				}
				if (MassFirst[iw][jw]==1)
				{
					Square++;
				}


				iw=i+1;
				jw=j;
				if (iw==SizeOfMass)
				{
					iw=0;
				}
				if (jw==SizeOfMass)
				{
					jw=0;
				}
				if (iw==-1)
				{
					iw=SizeOfMass-1;
				}
				if (jw==-1)
				{
					jw=SizeOfMass-1;
				}
				if (MassFirst[iw][jw]==1)
				{
					Square++;
				}


				iw=i;
				jw=j-1;
				if (iw==SizeOfMass)
				{
					iw=0;
				}
				if (jw==SizeOfMass)
				{
					jw=0;
				}
				if (iw==-1)
				{
					iw=SizeOfMass-1;
				}
				if (jw==-1)
				{
					jw=SizeOfMass-1;
				}
				if (MassFirst[iw][jw]==1)
				{
					Square++;
				}


				iw=i-1;
				jw=j;
				if (iw==SizeOfMass)
				{
					iw=0;
				}
				if (jw==SizeOfMass)
				{
					jw=0;
				}
				if (iw==-1)
				{
					iw=SizeOfMass-1;
				}
				if (jw==-1)
				{
					jw=SizeOfMass-1;
				}
				if (MassFirst[iw][jw]==1)
				{
					Square++;
				}


				iw=i-1;
				jw=j-1;
				if (iw==SizeOfMass)
				{
					iw=0;
				}
				if (jw==SizeOfMass)
				{
					jw=0;
				}
				if (iw==-1)
				{
					iw=SizeOfMass-1;
				}
				if (jw==-1)
				{
					jw=SizeOfMass-1;
				}
				if (MassFirst[iw][jw]==1)
				{
					Square++;
				}


				iw=i-1;
				jw=j+1;
				if (iw==SizeOfMass)
				{
					iw=0;
				}
				if (jw==SizeOfMass)
				{
					jw=0;
				}
				if (iw==-1)
				{
					iw=SizeOfMass-1;
				}
				if (jw==-1)
				{
					jw=SizeOfMass-1;
				}
				if (MassFirst[iw][jw]==1)
				{
					Square++;
				}


				iw=i+1;
				jw=j-1;
				if (iw==SizeOfMass)
				{
					iw=0;
				}
				if (jw==SizeOfMass)
				{
					jw=0;
				}
				if (iw==-1)
				{
					iw=SizeOfMass-1;
				}
				if (jw==-1)
				{
					jw=SizeOfMass-1;
				}
				if (MassFirst[iw][jw]==1)
				{
					Square++;
				}




			if ((Square == 3) && (MassFirst[i][j]==0))
			{
				MassSecond[i][j]=1;
			}

			if (((Square <2) || (Square > 3)) && (MassFirst[i][j]==1))
			{
				 MassSecond[i][j]=0;
			}







		}

	}

	FILE *F;

	F=fopen("Stat.txt","rw+");

	int Dies;
	int Life;

	char a;



	for (i = 0; i < SizeOfMass; i++)
	{
		for (j = 0; j < SizeOfMass; j++)
		{
			if (MassFirst[i][j]==1 && MassSecond[i][j]==0) {
			   Dies++;

			}
			if (MassFirst[i][j]==0 && MassSecond[i][j]==1){
			   Life++;

			}
			MassFirst[i][j]=MassSecond[i][j];
        }
	}


}











void DrawSquare(TColor Clr,int X, int Y, int SizeOfSquare,TBitmap *Bitmap)
{



	Bitmap->Canvas->Pen->Width=1;
	Bitmap->Canvas->Brush->Color=Clr;
	Bitmap->Canvas->Pen->Color=Clr;


	if ((X % SizeOfSquare > 1 && X % SizeOfSquare < SizeOfSquare) && (Y % SizeOfSquare > 1 && Y % SizeOfSquare < SizeOfSquare))
	{
		Bitmap->Canvas->Rectangle(X/SizeOfSquare*SizeOfSquare+2,Y/SizeOfSquare*SizeOfSquare+2,X/SizeOfSquare*SizeOfSquare+SizeOfSquare,Y/SizeOfSquare*SizeOfSquare+SizeOfSquare);

	}


}




void Clear(int **MassFirst,int **MassSecond,int SizeOfSquare,int SizeOfMass,TBitmap *Bitmap,TCanvas *Can)
{
	int i;
	int j;
	for (i = 0; i < (SizeOfMass); i++)
	{
		for (j = 0; j < SizeOfMass; j++)
		{
			MassFirst[i][j]=0;
			MassSecond[i][j]=0;
			DrawSquare(clBlack,i*SizeOfSquare+10,j*SizeOfSquare+10,SizeOfSquare,Bitmap);
		}
	}
	Can->Draw(0,0,Bitmap);
}





void DrawMass(int **MassFirst, int SizeOfMass, int SizeOfSquare,TBitmap *Bitmap)
{

	int i;
	int j;

	for (i = 0; i < SizeOfMass; i++)
	{
		for (j = 0; j < SizeOfMass; j++)
		{
			if (MassFirst[i][j]== 0)
			{
				DrawSquare(clBlack,i*SizeOfSquare+10,j*SizeOfSquare+10,SizeOfSquare,Bitmap);
			}
			if (MassFirst[i][j]== 1)
			{
				DrawSquare(clBlue,i*SizeOfSquare+10,j*SizeOfSquare+10,SizeOfSquare,Bitmap);
			}
		}
	}
}
