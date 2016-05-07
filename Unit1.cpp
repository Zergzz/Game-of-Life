//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include <jpeg.hpp>
#include <mmsystem.h>
#include<vfw.h>
#include <windows.h>
#include <stdio.h>







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



	//PlaySoundA("Menu.mp3", NULL, SND_FILENAME);

	 TCHAR Buffer2[] = TEXT("Menu.mp3");
   //	HWND MCIHwnd = MCIWndCreate(Application->Handle, HInstance, NULL, Buffer2);
   //	MCIWndPlay(MCIHwnd);


	//PlaySound(Buffer2, NULL, SND_RESOURCE | SND_ASYNC | SND_LOOP);
	//PlaySound(Buffer2, NULL, SND_FILENAME | SND_ASYNC);

	//PlaySound (Buffer2, NULL, SND_SYNC|SND_ALIAS);
	MediaPlayer1->FileName="Menu.mp3";
	MediaPlayer1->Open();
	MediaPlayer1->Play();
	MediaPlayer1->Notify=true;

	MediaPlayer2->FileName="Stat.mp3";
	MediaPlayer2->Open();
	//MediaPlayer2->Play();
	MediaPlayer2->Notify=true;

	//MediaPlayer1->Stop();


	Form1->Image3->Picture->LoadFromFile("Fon.jpg");
	Form1->Image4->Picture->LoadFromFile("Fon.jpg");
	Form1->Image2->Picture->LoadFromFile("Stat.jpg");
	Form1->Image5->Picture->LoadFromFile("St.jpg");






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
   //Form1->Image3->Picture->LoadFromFile("Ft.jpg");
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button9Click(TObject *Sender)
{
   Notebook1->PageIndex=0;
}
//---------------------------------------------------------------------------







void __fastcall TForm1::Button5Click(TObject *Sender)
{
    Notebook1->PageIndex=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
    Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
   if (CheckBox1->Checked==True) {
	  Form1->Image3->Picture->LoadFromFile("Ft.jpg");
	  Form1->Image4->Picture->LoadFromFile("Ft.jpg");

	  //CheckBox1->Enabled=False;


   }
   if (CheckBox1->Checked==False)
   {
	   Form1->Image3->Picture->LoadFromFile("Fon.jpg");
	   Form1->Image4->Picture->LoadFromFile("Fon.jpg");
	   //CheckBox1->Enabled=True;

   }
   Notebook1->PageIndex=0;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button6Click(TObject *Sender)
{
   Notebook1->PageIndex=3;
   MediaPlayer1->Stop();
   MediaPlayer2->Play();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button11Click(TObject *Sender)
{
   Notebook1->PageIndex=0;
   MediaPlayer2->Stop();
   MediaPlayer1->Play();
}
//---------------------------------------------------------------------------





