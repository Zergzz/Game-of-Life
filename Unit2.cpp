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

	F=fopen("Stat.txt","r+");


	int Dies;
	int Life;


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



	sprintf(SLife,"%d",Life);
	sprintf(SDies,"%d",Dies);

	char StrIn[16];
	StrIn[0]='\0';

	int v = strlen(StrIn);

	strcat(StrIn,SLife);
	strcat(StrIn,"%");
	strcat(StrIn,SDies);
	strcat(StrIn,"%");

	F=fopen("Stat.txt","w+");

	fputs(StrIn,F);

	fclose(F);




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




void DrawMassWithPlaners(int **MassFirst, int SizeOfMass, int SizeOfSquare,TBitmap *Bitmap)
{

	int i;
	int j;

	int XMass[9];



	int YMass[9];







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



	for (i = 0; i < SizeOfMass; i++)
	{
		for (j = 0; j < SizeOfMass; j++)
		{


			YMass[0]=i;
			XMass[0]=j;
			YMass[1]=i;
			XMass[1]=j+1;
			YMass[2]=i;
			XMass[2]=j+2;
			YMass[3]=i+1;
			XMass[3]=j;
			YMass[4]=i+1;
			XMass[4]=j+1;
			YMass[5]=i+1;
			XMass[5]=j+2;
			YMass[6]=i+2;
			XMass[6]=j;
			YMass[7]=i+2;
			XMass[7]=j+1;
			YMass[8]=i+2;
			XMass[8]=j+2;


			for (int r = 0; r < 9; r++)
			{
				if (XMass[r]>=SizeOfMass)
				{
					XMass[r]=XMass[r]-SizeOfMass;
				}

				if (YMass[r]>=SizeOfMass)
				{
					YMass[r]=YMass[r]-SizeOfMass;
				}
			}
















			if ((MassFirst[XMass[0]][YMass[0]]==0) && (MassFirst[XMass[1]][YMass[1]]==1) &&
			(MassFirst[XMass[2]][YMass[2]]==0) && (MassFirst[XMass[3]][YMass[3]]==0) &&
			(MassFirst[XMass[4]][YMass[4]]==0) && (MassFirst[XMass[5]][YMass[5]]==1)
			&& (MassFirst[XMass[6]][YMass[6]]==1) && (MassFirst[XMass[7]][YMass[7]]==1)
			&& (MassFirst[XMass[8]][YMass[8]]==1))

			{

				DrawSquare(clRed,XMass[1]*SizeOfSquare+10,YMass[1]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[5]*SizeOfSquare+10,YMass[5]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[6]*SizeOfSquare+10,YMass[6]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[7]*SizeOfSquare+10,YMass[7]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[8]*SizeOfSquare+10,YMass[8]*SizeOfSquare+10,SizeOfSquare,Bitmap);

			}



			if ((MassFirst[XMass[0]][YMass[0]]==1) && (MassFirst[XMass[1]][YMass[1]]==0) &&
			(MassFirst[XMass[2]][YMass[2]]==1) && (MassFirst[XMass[3]][YMass[3]]==0) &&
			(MassFirst[XMass[4]][YMass[4]]==1) && (MassFirst[XMass[5]][YMass[5]]==1)
			&& (MassFirst[XMass[6]][YMass[6]]==0) && (MassFirst[XMass[7]][YMass[7]]==1)
			&& (MassFirst[XMass[8]][YMass[8]]==0))

			{

				DrawSquare(clRed,XMass[0]*SizeOfSquare+10,YMass[0]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[2]*SizeOfSquare+10,YMass[2]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[4]*SizeOfSquare+10,YMass[4]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[5]*SizeOfSquare+10,YMass[5]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[7]*SizeOfSquare+10,YMass[7]*SizeOfSquare+10,SizeOfSquare,Bitmap);

			}


			if ((MassFirst[XMass[0]][YMass[0]]==0) && (MassFirst[XMass[1]][YMass[1]]==0) &&
			(MassFirst[XMass[2]][YMass[2]]==1) && (MassFirst[XMass[3]][YMass[3]]==1) &&
			(MassFirst[XMass[4]][YMass[4]]==0) && (MassFirst[XMass[5]][YMass[5]]==1)
			&& (MassFirst[XMass[6]][YMass[6]]==0) && (MassFirst[XMass[7]][YMass[7]]==1)
			&& (MassFirst[XMass[8]][YMass[8]]==1))

			{

				DrawSquare(clRed,XMass[2]*SizeOfSquare+10,YMass[2]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[3]*SizeOfSquare+10,YMass[3]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[5]*SizeOfSquare+10,YMass[5]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[7]*SizeOfSquare+10,YMass[7]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[8]*SizeOfSquare+10,YMass[8]*SizeOfSquare+10,SizeOfSquare,Bitmap);

			}


			if ((MassFirst[XMass[0]][YMass[0]]==1) && (MassFirst[XMass[1]][YMass[1]]==0) &&
			(MassFirst[XMass[2]][YMass[2]]==0) && (MassFirst[XMass[3]][YMass[3]]==0) &&
			(MassFirst[XMass[4]][YMass[4]]==1) && (MassFirst[XMass[5]][YMass[5]]==1)
			&& (MassFirst[XMass[6]][YMass[6]]==1) && (MassFirst[XMass[7]][YMass[7]]==1)
			&& (MassFirst[XMass[8]][YMass[8]]==0))

			{

				DrawSquare(clRed,XMass[0]*SizeOfSquare+10,YMass[0]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[4]*SizeOfSquare+10,YMass[4]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[5]*SizeOfSquare+10,YMass[5]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[6]*SizeOfSquare+10,YMass[6]*SizeOfSquare+10,SizeOfSquare,Bitmap);
				DrawSquare(clRed,XMass[7]*SizeOfSquare+10,YMass[7]*SizeOfSquare+10,SizeOfSquare,Bitmap);

			}




		}





	}






}
