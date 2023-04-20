//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCreate(TObject *Sender)
{
        HRGN zoltamorda, uszko;
        zoltamorda = CreateEllipticRgn(
        23,
        0,
        201,
        245
        );
        uszko = CreateEllipticRgn(
        0,
        94,
        30,
        160
        );
        CombineRgn(zoltamorda, zoltamorda, uszko, RGN_OR);
        SetWindowRgn( Handle, zoltamorda, true);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Timer1Timer(TObject *Sender)
{

Top = Form1 -> Top;
Left = Form1 -> Left;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::rm(TObject *Sender)
{
        if(Form2 ->AlphaBlendValue<125) {
                Form2 ->AlphaBlendValue +=5;
        }
        //Form1 -> chuj++;

}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
{
        Form1 -> Close();
        Close();        
}
//---------------------------------------------------------------------------
