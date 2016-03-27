//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


Graphics::TBitmap   *Bitmap = new Graphics::TBitmap;





int SizeOfSquare;
int SizeOfMass;
int **MassFirst;
int **MassSecond;
int PastNumSquareX;
int PastNumSquareY;
int FirstSquare;


void DrawLine(int SizeL)
{
	Bitmap->Canvas->Brush->Color=clBlack;
	Bitmap->Canvas->Pen->Width=2;
	Bitmap->Canvas->Pen->Color=clWhite;
	Bitmap->Width=Form1->Image1->Width;
	Bitmap->Height=Form1->Image1->Height;

	for (int i = 1; i < Form1->Image1->Width; i=i+SizeL)
	{
		Bitmap->Canvas->MoveTo(i,1);
		Bitmap->Canvas->LineTo(i,Form1->Image1->Height);
	}

	for (int i = 1; i < Form1->Image1->Width; i=i+SizeL)
	{
		Bitmap->Canvas->MoveTo(1,i);
		Bitmap->Canvas->LineTo(Form1->Image1->Height,i);
	}

	Form1->Image1->Canvas->Draw(0,0,Bitmap);
}


void Life()
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

	for (i = 0; i < SizeOfMass; i++)
	{
		for (j = 0; j < SizeOfMass; j++)
		{
			MassFirst[i][j]=MassSecond[i][j];
        }
	}


}



void DrawSquare(TColor Clr,int X, int Y, int SizeL)
{



	Bitmap->Canvas->Pen->Width=1;
	Bitmap->Canvas->Brush->Color=Clr;
	Bitmap->Canvas->Pen->Color=Clr;


	if ((X % SizeL > 1 && X % SizeL < SizeL) && (Y % SizeL > 1 && Y % SizeL < SizeL))
	{
		Bitmap->Canvas->Rectangle(X/SizeL*SizeL+2,Y/SizeL*SizeL+2,X/SizeL*SizeL+SizeL,Y/SizeL*SizeL+SizeL);

	}


}



void ChangeSquareMove(int X, int Y)
{


	if ((PastNumSquareX != X/SizeOfSquare) || (PastNumSquareY != Y/SizeOfSquare) || (FirstSquare == -1))
	{


		if (FirstSquare==-1)
		{
			if (MassFirst[X/SizeOfSquare][Y/SizeOfSquare]==0)
			{
				FirstSquare=0;
			}



			if (MassFirst[X/SizeOfSquare][Y/SizeOfSquare]==1)
			{
				FirstSquare=1;
			}

		}




		if (((X % SizeOfSquare > 1 && X % SizeOfSquare < SizeOfSquare) && (Y % SizeOfSquare > 1 && Y % SizeOfSquare < SizeOfSquare)))
		{
			int k;
			k = 0;
			if ((MassFirst[X/SizeOfSquare][Y/SizeOfSquare]==0) && (FirstSquare==0))
			{
				MassFirst[X/SizeOfSquare][Y/SizeOfSquare]=1;
				k++;
				PastNumSquareX=X/SizeOfSquare;
				PastNumSquareY=Y/SizeOfSquare;
			}

			if ((MassFirst[X/SizeOfSquare][Y/SizeOfSquare]==1) && (k == 0) && (FirstSquare==1))
			{
				MassFirst[X/SizeOfSquare][Y/SizeOfSquare]=0;
				PastNumSquareX=X/SizeOfSquare;
				PastNumSquareY=Y/SizeOfSquare;
			}

	}




	if (MassFirst[X/SizeOfSquare][Y/SizeOfSquare]==1)
	{
		DrawSquare(clBlue,X,Y,SizeOfSquare);
		Form1->Image1->Canvas->Draw(0,0,Bitmap);
	}

	if (MassFirst[X/SizeOfSquare][Y/SizeOfSquare]==0)
	{
		DrawSquare(clBlack,X,Y,SizeOfSquare);
		Form1->Image1->Canvas->Draw(0,0,Bitmap);
	}

	}
}



void DrawMass()
{

	int i;
	int j;

	for (i = 0; i < SizeOfMass; i++)
	{
		for (j = 0; j < SizeOfMass; j++)
		{
			if (MassFirst[i][j]== 0)
			{
				DrawSquare(clBlack,i*SizeOfSquare+10,j*SizeOfSquare+10,SizeOfSquare);
			}
			if (MassFirst[i][j]== 1)
			{
				DrawSquare(clBlue,i*SizeOfSquare+10,j*SizeOfSquare+10,SizeOfSquare);
			}
		}
	}
}



void __fastcall TForm1::FormCreate(TObject *Sender)
{
	int i,j;



	SizeOfSquare=20;
	SizeOfMass= Image1->Width/SizeOfSquare;
	MassFirst = new int*[SizeOfMass];
	MassSecond = new int*[SizeOfMass];

	for (i = 0; i < SizeOfMass; i++)
	{
		MassFirst[i] = new int[SizeOfMass];
		MassSecond[i] = new int[SizeOfMass];

	}

	for (i = 0; i < SizeOfMass; i++)
	{
		for (j = 0; i < SizeOfMass; i++)
		{
			MassFirst[i][j]=0;
			MassSecond[i][j]=0;

		}



	}

	PastNumSquareX=-1;
	PastNumSquareY=-1;

	DrawLine(SizeOfSquare);
}
//---------------------------------------------------------------------------






int Draw;


void __fastcall TForm1::Image1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{

   if (GetAsyncKeyState(VK_LBUTTON) != 0) {
	   ChangeSquareMove(X,Y);
   }

   if (GetAsyncKeyState(VK_LBUTTON) == 0) {
		FirstSquare=-1;
   }





}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
   Timer1->Enabled=True;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	Life();
	DrawMass();
	Form1->Image1->Canvas->Draw(0,0,Bitmap);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Timer1->Enabled=False;
}
//---------------------------------------------------------------------------
