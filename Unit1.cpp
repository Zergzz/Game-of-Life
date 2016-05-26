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



TColor FonColor;
TColor SquareColor;
TColor PlanerColor;













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
		DrawSquare(SquareColor,X,Y,SizeOfSquare,Bitmap);
		Form1->Image1->Canvas->Draw(0,0,Bitmap);
	}

	if (MassFirst[X/SizeOfSquare][Y/SizeOfSquare]==0)
	{

		//Bitmap->Canvas->Brush->Style = bsClear;
		DrawSquare(FonColor,X,Y,SizeOfSquare,Bitmap);
		Form1->Image1->Canvas->Draw(0,0,Bitmap);


	}

	}
}









void __fastcall TForm1::FormCreate(TObject *Sender)
{
	int i,j;

	Form1->Image1->Transparent=True;

	FonColor=clWhite;
	SquareColor=clRed;
	PlanerColor=clBlue;




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

	DrawLine(SizeOfSquare,Form1->Image1->Width,Bitmap,Form1->Image1->Canvas,clGray);



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

   /*
	Form1->Image3->Picture->LoadFromFile("Fon.jpg");
	Form1->Image4->Picture->LoadFromFile("Fon.jpg");
	Form1->Image2->Picture->LoadFromFile("Stat.jpg");
	Form1->Image5->Picture->LoadFromFile("St.jpg");

	*/

	Form1->Image3->Picture->LoadFromFile("Темы//Космос//Fon.jpg");
	   Form1->Image4->Picture->LoadFromFile("Темы//Космос//Fon.jpg");
	   Form1->Image2->Picture->LoadFromFile("Темы//Космос//Stat.jpg");
	   Form1->Image5->Picture->LoadFromFile("Темы//Космос//Set.jpg");
	   MediaPlayer1->FileName="Темы//Космос//Fon.mp3";
	   MediaPlayer2->FileName="Темы//Космос//Stat.mp3";







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
	DrawMassWithUndangerPlaners(MassFirst,SizeOfMass,SizeOfSquare, Bitmap,FonColor,SquareColor,PlanerColor);
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
	Clear(MassFirst,MassSecond,SizeOfSquare,SizeOfMass,Bitmap,Form1->Image1->Canvas,FonColor);
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


	//MediaPlayer1->Close();


	//MediaPlayer1->Notify=false;


   if (RadioButton1->Checked==True) {
	  Form1->Image3->Picture->LoadFromFile("Темы//Чеширский кот//Fon.jpg");
	  Form1->Image4->Picture->LoadFromFile("Темы//Чеширский кот//Fon.jpg");
	  Form1->Image2->Picture->LoadFromFile("Темы//Чеширский кот//Stat.jpg");
	  MediaPlayer1->FileName="Темы//Чеширский кот//Fon.mp3";
	  MediaPlayer2->FileName="Темы//Чеширский кот//Stat.mp3";
	  //Form1->Image5->Picture->LoadFromFile("Темы//Чеширский кот//Set.jpg");

	  //CheckBox1->Enabled=False;


   }




   if (RadioButton7->Checked==True) {
	  Form1->Image3->Picture->LoadFromFile("Темы//Тёмный лес//Fon.jpg");
	  Form1->Image4->Picture->LoadFromFile("Темы//Тёмный лес//Fon.jpg");
	  Form1->Image2->Picture->LoadFromFile("Темы//Тёмный лес//Stat.jpg");
	  MediaPlayer1->FileName="Темы//Тёмный лес//Fon.mp3";
	  MediaPlayer2->FileName="Темы//Тёмный лес//Stat.mp3";
	  //Form1->Image5->Picture->LoadFromFile("Темы//Чеширский кот//Set.jpg");

	  //CheckBox1->Enabled=False;


   }


   if (RadioButton2->Checked==True)
   {
	   Form1->Image3->Picture->LoadFromFile("Темы//Космос//Fon.jpg");
	   Form1->Image4->Picture->LoadFromFile("Темы//Космос//Fon.jpg");
	   Form1->Image2->Picture->LoadFromFile("Темы//Космос//Stat.jpg");
	   MediaPlayer1->FileName="Темы//Космос//Fon.mp3";
	   MediaPlayer2->FileName="Темы//Космос//Stat.mp3";
	   //Form1->Image4->Picture->LoadFromFile("Темы//Чеширский кот//Set.jpg");
	   //CheckBox1->Enabled=True;

   }


   if (RadioButton3->Checked==True) {
	  Form1->Image3->Picture->LoadFromFile("Темы//Огонь//Fon.jpg");
	   Form1->Image4->Picture->LoadFromFile("Темы//Огонь//Fon.jpg");
	   Form1->Image2->Picture->LoadFromFile("Темы//Огонь//Stat.jpg");
	   MediaPlayer1->FileName="Темы//Огонь//Fon.mp3";
	   MediaPlayer2->FileName="Темы//Огонь//Stat.mp3";

   }


	if (RadioButton4->Checked==True) {
	  Form1->Image3->Picture->LoadFromFile("Темы//Вода//Fon.jpg");
	   Form1->Image4->Picture->LoadFromFile("Темы//Вода//Fon.jpg");
	   Form1->Image2->Picture->LoadFromFile("Темы//Вода//Stat.jpg");
	   MediaPlayer1->FileName="Темы//Вода//Fon.mp3";
	   MediaPlayer2->FileName="Темы//Вода//Stat.mp3";

   }

   if (RadioButton5->Checked==True) {
	  Form1->Image3->Picture->LoadFromFile("Темы//Тропический рай//Fon.jpg");
	   Form1->Image4->Picture->LoadFromFile("Темы//Тропический рай//Fon.jpg");
	   Form1->Image2->Picture->LoadFromFile("Темы//Тропический рай//Stat.jpg");
	   MediaPlayer1->FileName="Темы//Тропический рай//Fon.mp3";
	   MediaPlayer2->FileName="Темы//Тропический рай//Stat.mp3";

   }



   if (RadioButton6->Checked==True) {
	  Form1->Image3->Picture->LoadFromFile("Темы//Лес//Fon.jpg");
	   Form1->Image4->Picture->LoadFromFile("Темы//Лес//Fon.jpg");
	   Form1->Image2->Picture->LoadFromFile("Темы//Лес//Stat.jpg");
	   MediaPlayer1->FileName="Темы//Лес//Fon.mp3";
	   MediaPlayer2->FileName="Темы//Лес//Stat.mp3";

   }


   if (RadioButton8->Checked==True)
   {
	   Form1->Image3->Picture->LoadFromFile("Темы//Дождь//Fon.jpg");
	   Form1->Image4->Picture->LoadFromFile("Темы//Дождь//Fon.jpg");
	   Form1->Image2->Picture->LoadFromFile("Темы//Дождь//Stat.jpg");
	   MediaPlayer1->FileName="Темы//Дождь//Fon.mp3";
	   MediaPlayer2->FileName="Темы//Дождь//Stat.mp3";
	   //Form1->Image4->Picture->LoadFromFile("Темы//Чеширский кот//Set.jpg");
	   //CheckBox1->Enabled=True;

   }



   if (RadioButton10->Checked==True)
   {
	   Form1->Image3->Picture->LoadFromFile("Темы//Воздух//Fon.jpg");
	   Form1->Image4->Picture->LoadFromFile("Темы//Воздух//Fon.jpg");
	   Form1->Image2->Picture->LoadFromFile("Темы//Воздух//Stat.jpg");
	   MediaPlayer1->FileName="Темы//Воздух//Fon.mp3";
	   MediaPlayer2->FileName="Темы//Воздух//Stat.mp3";
	   //Form1->Image4->Picture->LoadFromFile("Темы//Чеширский кот//Set.jpg");
	   //CheckBox1->Enabled=True;

   }




   if (RadioButton7->Checked==True)
   {
	   Form1->Image3->Picture->LoadFromFile("Темы//Тёмный лес//Fon.jpg");
	   Form1->Image4->Picture->LoadFromFile("Темы//Тёмный лес//Fon.jpg");
	   Form1->Image2->Picture->LoadFromFile("Темы//Тёмный лес//Stat.jpg");
	   MediaPlayer1->FileName="Темы//Тёмный лес//Fon.mp3";
	   MediaPlayer2->FileName="Темы//Тёмный лес//Stat.mp3";
	   //Form1->Image4->Picture->LoadFromFile("Темы//Чеширский кот//Set.jpg");
	   //CheckBox1->Enabled=True;

   }



   if (RadioButton9->Checked==True)
   {
	   Form1->Image3->Picture->LoadFromFile("Темы//Зима//Fon.jpg");
	   Form1->Image4->Picture->LoadFromFile("Темы//Зима//Fon.jpg");
	   Form1->Image2->Picture->LoadFromFile("Темы//Зима//Stat.jpg");
	   MediaPlayer1->FileName="Темы//Зима//Fon.mp3";
	   MediaPlayer2->FileName="Темы//Зима//Stat.mp3";
	   //Form1->Image4->Picture->LoadFromFile("Темы//Чеширский кот//Set.jpg");
	   //CheckBox1->Enabled=True;

   }




	MediaPlayer1->Open();



   MediaPlayer1->Play();

   MediaPlayer1->Notify=true;











   Notebook1->PageIndex=0;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button6Click(TObject *Sender)
{




	FILE *F;

	F=fopen("Stat.txt","r+");


	int Dies;
	int Life;


   	int i;
	int j;


	char Buf;
	char SDies[10];
	char SLife[10];
	bool Raz;
	Raz=false;

	i=0;
	j=0;








	while (!feof(F))
	{
		Buf=getc(F);
		if (Raz==false)
		{


			if (Buf!='%')
			{
			   SLife[i]=Buf;
			   i++;
			}
			else
			{
				Raz=true;
				SLife[i]='\0';
				Life=atoi(SLife);
			}
		}
		else
		{
			if (Buf!='%')
			{
				SDies[j]=Buf;
				j++;
			}
			else
			{
			   SDies[j]='\0';
				break;
			}
		}

	}


	Dies=atoi(SDies);

	fclose(F);


   char Str[20]="Родилось ";
   //Str[0]='\0';

   strcat(Str,SLife);
   Label1->Caption=Str;
   char Str1[20]="Умерло ";
   strcat(Str1,SDies);

   Label2->Caption=Str1;



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







void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
	Form1->Image5->Picture->LoadFromFile("Темы//Чеширский кот//Set.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
   Form1->Image5->Picture->LoadFromFile("Темы//Космос//Set.jpg");
}
//---------------------------------------------------------------------------



void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
	Form1->Image5->Picture->LoadFromFile("Темы//Огонь//Set.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
	Form1->Image5->Picture->LoadFromFile("Темы//Вода//Set.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton5Click(TObject *Sender)
{
	Form1->Image5->Picture->LoadFromFile("Темы//Тропический рай//Set.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton6Click(TObject *Sender)
{
	Form1->Image5->Picture->LoadFromFile("Темы//Лес//Set.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton7Click(TObject *Sender)
{
	Form1->Image5->Picture->LoadFromFile("Темы//Тёмный лес//Set.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton8Click(TObject *Sender)
{
   Form1->Image5->Picture->LoadFromFile("Темы//Дождь//Set.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton9Click(TObject *Sender)
{
   Form1->Image5->Picture->LoadFromFile("Темы//Зима//Set.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton10Click(TObject *Sender)
{
   Form1->Image5->Picture->LoadFromFile("Темы//Воздух//Set.jpg");
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button12Click(TObject *Sender)
{
   Timer1->Interval=1001-StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ColorBox1Change(TObject *Sender)
{
	FonColor=ColorBox1->Selected;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ColorBox2Change(TObject *Sender)
{
   SquareColor=ColorBox2->Selected;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ColorBox3Change(TObject *Sender)
{
   PlanerColor=ColorBox3->Selected;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::MediaPlayer2Notify(TObject *Sender)
{
	//MediaPlayer2->Play();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::MediaPlayer1Notify(TObject *Sender)
{
if (MediaPlayer1->Mode==mpStopped)
	MediaPlayer1->Play();
}
//---------------------------------------------------------------------------

