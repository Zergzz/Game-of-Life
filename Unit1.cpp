//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include <jpeg.hpp>

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

Graphics::TBitmap   *Fon = new Graphics::TBitmap;

TJPEGImage *examp = new TJPEGImage;





int SizeOfSquare;
int SizeOfMass;
int **MassFirst;
int **MassSecond;
int PastNumSquareX;
int PastNumSquareY;
int FirstSquare;












void ChangeSquareMove(int **MassFirst ,int SizeOfSquare , int X, int Y/*,int *FirstSquare, int *PastNumSquareX, int *PastNumSquareY,TCanvas *Can*/)
{


	if ((PastNumSquareX != X / SizeOfSquare) || (PastNumSquareY != Y/ SizeOfSquare) || (FirstSquare == -1))
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
				PastNumSquareX=X/ SizeOfSquare;
				PastNumSquareY=Y/ SizeOfSquare;
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
		DrawSquare(clBlue,X,Y,SizeOfSquare,Bitmap);
		Form1->Image1->Canvas->Draw(0,0,Bitmap);
	}

	if (MassFirst[X/SizeOfSquare][Y/SizeOfSquare]==0)
	{
		DrawSquare(clBlack,X,Y,SizeOfSquare,Bitmap);
		Form1->Image1->Canvas->Draw(0,0,Bitmap);
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

	DrawLine(SizeOfSquare,Form1->Image1->Width,Bitmap,Form1->Image1->Canvas);


	//examp->LoadFromFile("Fon.jpg");
	//Fon->Assign(examp);
	//Canvas->Draw(10,10,Bitmap);
	//Form1->Image3->Canvas->Draw(0,0,Fon);
	Form1->Image3->Picture->LoadFromFile("Fon.jpg");
	delete examp;


}
//---------------------------------------------------------------------------









void __fastcall TForm1::Image1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{

   if (GetAsyncKeyState(VK_LBUTTON) != 0) {
	   ChangeSquareMove(MassFirst,SizeOfSquare,X,Y/*,&FirstSquare,&PastNumSquareX,&PastNumSquareY,Form1->Image1->Canvas*/);
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
	Life(MassFirst,MassSecond,SizeOfMass);
	DrawMass(MassFirst,SizeOfMass,SizeOfSquare, Bitmap);
	Form1->Image1->Canvas->Draw(0,0,Bitmap);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Timer1->Enabled=False;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Clear(MassFirst,MassSecond,SizeOfSquare,SizeOfMass,Bitmap,Form1->Image1->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
   Notebook1->PageIndex=1;
}
//---------------------------------------------------------------------------



