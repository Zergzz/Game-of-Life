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
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TMediaPlayer *MediaPlayer1;
	TButton *Button9;
	TCheckBox *CheckBox1;
	TLabel *Label1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);



private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
