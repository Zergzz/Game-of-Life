//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <windows.h>
#include <Vcl.MPlayer.hpp>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <Vcl.ActnColorMaps.hpp>
#include <Vcl.ActnMan.hpp>
#include <iostream>

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTimer *Timer1;
	TNotebook *Notebook1;
	TImage *Image1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TPanel *Panel1;
	TButton *Button8;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TImage *Image4;
	TMediaPlayer *MediaPlayer1;
	TButton *Button9;
	TPanel *Panel2;
	TCheckBox *CheckBox1;
	TButton *Button10;
	TImage *Image2;
	TMediaPlayer *MediaPlayer2;
	TButton *Button11;
	TImage *Image5;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TGroupBox *GroupBox1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TRadioButton *RadioButton5;
	TRadioButton *RadioButton6;
	TRadioButton *RadioButton7;
	TRadioButton *RadioButton8;
	TRadioButton *RadioButton9;
	TRadioButton *RadioButton10;
	TRadioButton *RadioButton12;
	TButton *Button12;
	TEdit *Edit1;
	TLabel *Label4;
	TImage *Image3;
	TColorBox *ColorBox1;
	TXPColorMap *XPColorMap1;
	TColorBox *ColorBox2;
	TColorBox *ColorBox3;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall RadioButton3Click(TObject *Sender);
	void __fastcall RadioButton4Click(TObject *Sender);
	void __fastcall RadioButton5Click(TObject *Sender);
	void __fastcall RadioButton6Click(TObject *Sender);
	void __fastcall RadioButton7Click(TObject *Sender);
	void __fastcall RadioButton8Click(TObject *Sender);
	void __fastcall RadioButton9Click(TObject *Sender);
	void __fastcall RadioButton10Click(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);
	void __fastcall ColorBox1Change(TObject *Sender);
	void __fastcall ColorBox2Change(TObject *Sender);
	void __fastcall ColorBox3Change(TObject *Sender);
	void __fastcall MediaPlayer2Notify(TObject *Sender);
	void __fastcall MediaPlayer1Notify(TObject *Sender);







private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
