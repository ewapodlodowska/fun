/***************************************************************
 * Name:      FunMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Ewa Podlodowska & Sofiya Rylova ()
 * Created:   2022-01-08
 * Copyright: Ewa Podlodowska & Sofiya Rylova ()
 * License:
 **************************************************************/

#include "FunMain.h"
#include <wx/msgdlg.h>
#include <wx/msgdlg.h>
#undef _
#define _(s) wxString::FromUTF8(s)

#include<windows.h>
#include"Film.h"
#include"GatunekFilmu.h"
#include"Gra.h"
#include"Jedzenie.h"
#include"odczytywanie.h"
#include"TypJedzenia.h"
#include "GatunekMuzyki.h"
#include <algorithm>
#include<filesystem>

//(*InternalHeaders(FunDialog)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)
#include<cstdlib>
#include<iostream>
using namespace std;
//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(FunDialog)
const long FunDialog::ID_BITMAPBUTTON1 = wxNewId();
const long FunDialog::ID_STATICTEXT10 = wxNewId();
const long FunDialog::ID_STATICTEXT1 = wxNewId();
const long FunDialog::ID_STATICTEXT11 = wxNewId();
const long FunDialog::ID_TEXTCTRL4 = wxNewId();
const long FunDialog::ID_STATICTEXT12 = wxNewId();
const long FunDialog::ID_SPINCTRL1 = wxNewId();
const long FunDialog::ID_STATICLINE4 = wxNewId();
const long FunDialog::ID_STATICTEXT18 = wxNewId();
const long FunDialog::ID_CHOICE6 = wxNewId();
const long FunDialog::ID_STATICTEXT19 = wxNewId();
const long FunDialog::ID_STATICTEXT9 = wxNewId();
const long FunDialog::ID_TEXTCTRL12 = wxNewId();
const long FunDialog::ID_BUTTON5 = wxNewId();
const long FunDialog::ID_STATICLINE8 = wxNewId();
const long FunDialog::ID_STATICTEXT2 = wxNewId();
const long FunDialog::ID_CHOICE1 = wxNewId();
const long FunDialog::ID_STATICTEXT3 = wxNewId();
const long FunDialog::ID_TEXTCTRL1 = wxNewId();
const long FunDialog::ID_STATICTEXT33 = wxNewId();
const long FunDialog::ID_BUTTON1 = wxNewId();
const long FunDialog::ID_STATICTEXT4 = wxNewId();
const long FunDialog::ID_TEXTCTRL2 = wxNewId();
const long FunDialog::ID_STATICTEXT6 = wxNewId();
const long FunDialog::ID_STATICTEXT5 = wxNewId();
const long FunDialog::ID_CHOICE2 = wxNewId();
const long FunDialog::ID_STATICTEXT25 = wxNewId();
const long FunDialog::ID_STATICTEXT26 = wxNewId();
const long FunDialog::ID_HYPERLINKCTRL2 = wxNewId();
const long FunDialog::ID_STATICLINE3 = wxNewId();
const long FunDialog::ID_STATICTEXT7 = wxNewId();
const long FunDialog::ID_CHOICE3 = wxNewId();
const long FunDialog::ID_STATICTEXT8 = wxNewId();
const long FunDialog::ID_HYPERLINKCTRL1 = wxNewId();
const long FunDialog::ID_STATICLINE2 = wxNewId();
const long FunDialog::ID_STATICTEXT13 = wxNewId();
const long FunDialog::ID_CHOICE4 = wxNewId();
const long FunDialog::ID_STATICTEXT14 = wxNewId();
const long FunDialog::ID_CHOICE5 = wxNewId();
const long FunDialog::ID_STATICTEXT15 = wxNewId();
const long FunDialog::ID_TEXTCTRL6 = wxNewId();
const long FunDialog::ID_BUTTON3 = wxNewId();
const long FunDialog::ID_STATICLINE5 = wxNewId();
const long FunDialog::ID_STATICTEXT16 = wxNewId();
const long FunDialog::ID_TEXTCTRL7 = wxNewId();
const long FunDialog::ID_STATICTEXT20 = wxNewId();
const long FunDialog::ID_CHOICE7 = wxNewId();
const long FunDialog::ID_STATICTEXT21 = wxNewId();
const long FunDialog::ID_CHOICE8 = wxNewId();
const long FunDialog::ID_STATICTEXT17 = wxNewId();
const long FunDialog::ID_TEXTCTRL9 = wxNewId();
const long FunDialog::ID_TEXTCTRL10 = wxNewId();
const long FunDialog::ID_STATICTEXT24 = wxNewId();
const long FunDialog::ID_BUTTON4 = wxNewId();
const long FunDialog::ID_STATICLINE6 = wxNewId();
const long FunDialog::ID_STATICTEXT22 = wxNewId();
const long FunDialog::ID_BUTTON6 = wxNewId();
const long FunDialog::ID_STATICTEXT23 = wxNewId();
const long FunDialog::ID_BUTTON7 = wxNewId();
const long FunDialog::ID_STATICLINE7 = wxNewId();
const long FunDialog::ID_BUTTON8 = wxNewId();
//*)

BEGIN_EVENT_TABLE(FunDialog,wxDialog)
    //(*EventTable(FunDialog)
    //*)
END_EVENT_TABLE()

FunDialog::FunDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(FunDialog)
    wxBoxSizer* BoxSizer10;
    wxBoxSizer* BoxSizer13;
    wxBoxSizer* BoxSizer16;
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer7;
    wxBoxSizer* BoxSizer8;
    wxBoxSizer* BoxSizer9;
    wxFlexGridSizer* FlexGridSizer10;
    wxFlexGridSizer* FlexGridSizer11;
    wxFlexGridSizer* FlexGridSizer12;
    wxFlexGridSizer* FlexGridSizer13;
    wxFlexGridSizer* FlexGridSizer14;
    wxFlexGridSizer* FlexGridSizer15;
    wxFlexGridSizer* FlexGridSizer16;
    wxFlexGridSizer* FlexGridSizer17;
    wxFlexGridSizer* FlexGridSizer18;
    wxFlexGridSizer* FlexGridSizer19;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer20;
    wxFlexGridSizer* FlexGridSizer21;
    wxFlexGridSizer* FlexGridSizer22;
    wxFlexGridSizer* FlexGridSizer23;
    wxFlexGridSizer* FlexGridSizer2;
    wxFlexGridSizer* FlexGridSizer3;
    wxFlexGridSizer* FlexGridSizer4;
    wxFlexGridSizer* FlexGridSizer5;
    wxFlexGridSizer* FlexGridSizer6;
    wxFlexGridSizer* FlexGridSizer7;
    wxFlexGridSizer* FlexGridSizer8;
    wxFlexGridSizer* FlexGridSizer9;

    Create(parent, wxID_ANY, _("Fun"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(1060,1010));
    wxFont thisFont(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Microsoft PhagsPa"),wxFONTENCODING_DEFAULT);
    SetFont(thisFont);
    FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
    ikonka = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("dane\\ikonki\\cool.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    FlexGridSizer2->Add(ikonka, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText10 = new wxStaticText(this, ID_STATICTEXT10, wxEmptyString, wxDefaultPosition, wxSize(100,0), 0, _T("ID_STATICTEXT10"));
    FlexGridSizer2->Add(StaticText10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("GENERATOR DOBREJ ZABAWY"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(26,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Microsoft PhagsPa"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    FlexGridSizer2->Add(StaticText1, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxEXPAND, 5);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    FlexGridSizer11 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText11 = new wxStaticText(this, ID_STATICTEXT11, _("Wiek"), wxDefaultPosition, wxSize(164,-1), 0, _T("ID_STATICTEXT11"));
    FlexGridSizer11->Add(StaticText11, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    wiek = new wxTextCtrl(this, ID_TEXTCTRL4, _("0"), wxDefaultPosition, wxSize(65,-1), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    FlexGridSizer11->Add(wiek, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(FlexGridSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer22 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText12 = new wxStaticText(this, ID_STATICTEXT12, _("Ilość osób"), wxDefaultPosition, wxSize(124,32), 0, _T("ID_STATICTEXT12"));
    FlexGridSizer22->Add(StaticText12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ilosc_osob = new wxSpinCtrl(this, ID_SPINCTRL1, _T("1"), wxDefaultPosition, wxSize(75,-1), 0, 1, 100, 1, _T("ID_SPINCTRL1"));
    ilosc_osob->SetValue(_T("1"));
    FlexGridSizer22->Add(ilosc_osob, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(FlexGridSizer22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
    StaticLine4 = new wxStaticLine(this, ID_STATICLINE4, wxDefaultPosition, wxSize(10,3), wxLI_HORIZONTAL, _T("ID_STATICLINE4"));
    FlexGridSizer1->Add(StaticLine4, 1, wxALL|wxEXPAND, 5);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    FlexGridSizer14 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText18 = new wxStaticText(this, ID_STATICTEXT18, _("Rodzaj"), wxDefaultPosition, wxSize(164,-1), 0, _T("ID_STATICTEXT18"));
    FlexGridSizer14->Add(StaticText18, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    rodz_filmu = new wxChoice(this, ID_CHOICE6, wxDefaultPosition, wxSize(280,-1), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE6"));
    rodz_filmu->Append(_("akcji"));
    rodz_filmu->Append(_("animowane"));
    rodz_filmu->Append(_("dramaty"));
    rodz_filmu->Append(_("fantasy"));
    rodz_filmu->Append(_("horrory"));
    rodz_filmu->Append(_("komedie"));
    rodz_filmu->Append(_("komedie akcji"));
    rodz_filmu->Append(_("komedie romantyczne"));
    rodz_filmu->Append(_("kryminały"));
    rodz_filmu->Append(_("mystery"));
    rodz_filmu->Append(_("przygodowe"));
    rodz_filmu->Append(_("romantyczne"));
    rodz_filmu->Append(_("science fiction"));
    rodz_filmu->Append(_("superbohaterzy"));
    rodz_filmu->Append(_("thrillery"));
    FlexGridSizer14->Add(rodz_filmu, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText19 = new wxStaticText(this, ID_STATICTEXT19, wxEmptyString, wxDefaultPosition, wxSize(43,10), 0, _T("ID_STATICTEXT19"));
    FlexGridSizer14->Add(StaticText19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(FlexGridSizer14, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer15 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Film"), wxDefaultPosition, wxSize(124,-1), 0, _T("ID_STATICTEXT9"));
    FlexGridSizer15->Add(StaticText9, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    film = new wxTextCtrl(this, ID_TEXTCTRL12, wxEmptyString, wxDefaultPosition, wxSize(280,-1), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
    film->Disable();
    FlexGridSizer15->Add(film, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    los_film = new wxButton(this, ID_BUTTON5, _("Losuj"), wxDefaultPosition, wxSize(90,37), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    FlexGridSizer15->Add(los_film, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(FlexGridSizer15, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxEXPAND, 5);
    StaticLine8 = new wxStaticLine(this, ID_STATICLINE8, wxDefaultPosition, wxSize(10,3), wxLI_HORIZONTAL, _T("ID_STATICLINE8"));
    FlexGridSizer1->Add(StaticLine8, 1, wxALL|wxEXPAND, 5);
    BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    FlexGridSizer4 = new wxFlexGridSizer(5, 1, 0, 0);
    FlexGridSizer20 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Kuchnia"), wxDefaultPosition, wxSize(153,32), 0, _T("ID_STATICTEXT2"));
    FlexGridSizer20->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    kuchnia = new wxChoice(this, ID_CHOICE1, wxDefaultPosition, wxSize(280,37), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    kuchnia->Append(_("meksykańskie"));
    kuchnia->Append(_("indyjskie"));
    kuchnia->Append(_("sushi"));
    kuchnia->Append(_("amerykańskie"));
    kuchnia->Append(_("polskie"));
    kuchnia->Append(_("wegetariańskie"));
    kuchnia->Append(_("kebaby"));
    kuchnia->Append(_("desery"));
    kuchnia->Append(_("fast food"));
    FlexGridSizer20->Add(kuchnia, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4->Add(FlexGridSizer20, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer18 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Danie"), wxDefaultPosition, wxSize(153,-1), 0, _T("ID_STATICTEXT3"));
    FlexGridSizer18->Add(StaticText3, 1, wxALL|wxEXPAND, 5);
    danie = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(280,37), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    danie->Disable();
    FlexGridSizer18->Add(danie, 1, wxALL|wxALIGN_RIGHT, 5);
    FlexGridSizer4->Add(FlexGridSizer18, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer21 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText33 = new wxStaticText(this, ID_STATICTEXT33, wxEmptyString, wxDefaultPosition, wxSize(30,0), 0, _T("ID_STATICTEXT33"));
    FlexGridSizer21->Add(StaticText33, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    los_kuchnia = new wxButton(this, ID_BUTTON1, _("Losuj"), wxDefaultPosition, wxSize(90,35), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer21->Add(los_kuchnia, 1, wxALL, 5);
    FlexGridSizer4->Add(FlexGridSizer21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(FlexGridSizer4, 1, wxALL|wxEXPAND, 5);
    BoxSizer5->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    FlexGridSizer5 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Alkohol"), wxDefaultPosition, wxSize(120,-1), 0, _T("ID_STATICTEXT4"));
    FlexGridSizer5->Add(StaticText4, 1, wxALL|wxEXPAND, 5);
    alkohol = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(280,37), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    alkohol->Disable();
    FlexGridSizer5->Add(alkohol, 1, wxALL|wxALIGN_RIGHT, 5);
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    FlexGridSizer5->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Restauracja"), wxDefaultPosition, wxSize(120,-1), 0, _T("ID_STATICTEXT5"));
    FlexGridSizer5->Add(StaticText5, 1, wxALL|wxEXPAND, 5);
    restauracja = new wxChoice(this, ID_CHOICE2, wxDefaultPosition, wxSize(280,37), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    FlexGridSizer5->Add(restauracja, 1, wxALL|wxALIGN_RIGHT, 5);
    StaticText25 = new wxStaticText(this, ID_STATICTEXT25, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT25"));
    FlexGridSizer5->Add(StaticText25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText26 = new wxStaticText(this, ID_STATICTEXT26, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT26"));
    FlexGridSizer5->Add(StaticText26, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    HyperlinkCtrl2 = new wxHyperlinkCtrl(this, ID_HYPERLINKCTRL2, _("Kliknij tutaj"), _("https://www.pyszne.pl/"), wxDefaultPosition, wxSize(272,23), wxHL_CONTEXTMENU|wxHL_ALIGN_CENTRE, _T("ID_HYPERLINKCTRL2"));
    FlexGridSizer5->Add(HyperlinkCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4->Add(FlexGridSizer5, 1, wxALL|wxEXPAND, 5);
    BoxSizer5->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer1->Add(BoxSizer5, 1, wxALL|wxEXPAND, 5);
    StaticLine3 = new wxStaticLine(this, ID_STATICLINE3, wxDefaultPosition, wxSize(32,3), wxLI_HORIZONTAL, _T("ID_STATICLINE3"));
    FlexGridSizer1->Add(StaticLine3, 1, wxALL|wxEXPAND, 5);
    BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    FlexGridSizer6 = new wxFlexGridSizer(0, 5, 0, 0);
    FlexGridSizer6->AddGrowableCol(1);
    FlexGridSizer6->AddGrowableCol(3);
    FlexGridSizer6->AddGrowableCol(4);
    StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Rodzaj muzyki"), wxDefaultPosition, wxSize(158,-1), 0, _T("ID_STATICTEXT7"));
    FlexGridSizer6->Add(StaticText7, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    muzyka = new wxChoice(this, ID_CHOICE3, wxDefaultPosition, wxSize(280,37), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
    muzyka->Append(_("pop stare"));
    muzyka->Append(_("pop nowe"));
    muzyka->Append(_("stare"));
    muzyka->Append(_("stare polskie"));
    muzyka->Append(_("rap"));
    muzyka->Append(_("rap polski"));
    muzyka->Append(_("klasyka"));
    muzyka->Append(_("filmowa"));
    muzyka->Append(_("disco polo"));
    muzyka->Append(_("rock"));
    muzyka->Append(_("rock polski"));
    muzyka->Append(_("hip-hop"));
    muzyka->Append(_("elektroniczna"));
    muzyka->Append(_("klubowa"));
    muzyka->Append(_("reggae"));
    muzyka->Append(_("jazz"));
    FlexGridSizer6->Add(muzyka, 1, wxALL|wxALIGN_LEFT, 5);
    BoxSizer6->Add(FlexGridSizer6, 1, wxALL|wxEXPAND, 5);
    BoxSizer8->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    FlexGridSizer8 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Link"), wxDefaultPosition, wxSize(128,37), 0, _T("ID_STATICTEXT8"));
    FlexGridSizer8->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    HyperlinkCtrl1 = new wxHyperlinkCtrl(this, ID_HYPERLINKCTRL1, _("Kliknij tutaj"), _("https://www.youtube.com/"), wxDefaultPosition, wxDefaultSize, wxHL_CONTEXTMENU|wxHL_ALIGN_CENTRE, _T("ID_HYPERLINKCTRL1"));
    FlexGridSizer8->Add(HyperlinkCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7->Add(FlexGridSizer8, 1, wxALL|wxEXPAND, 5);
    BoxSizer8->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer8, 1, wxALL|wxEXPAND, 5);
    StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,3), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
    FlexGridSizer1->Add(StaticLine2, 1, wxALL|wxEXPAND, 5);
    BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    FlexGridSizer3 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer10 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText13 = new wxStaticText(this, ID_STATICTEXT13, _("Rodzaj gry"), wxDefaultPosition, wxSize(155,-1), 0, _T("ID_STATICTEXT13"));
    FlexGridSizer10->Add(StaticText13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    gra = new wxChoice(this, ID_CHOICE4, wxDefaultPosition, wxSize(280,37), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE4"));
    gra->Append(_("karciane"));
    gra->Append(_("planszowe"));
    gra->Append(_("inne"));
    FlexGridSizer10->Add(gra, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(FlexGridSizer10, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer23 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText14 = new wxStaticText(this, ID_STATICTEXT14, _("Akcesoria"), wxDefaultPosition, wxSize(155,-1), 0, _T("ID_STATICTEXT14"));
    FlexGridSizer23->Add(StaticText14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    akcesoria = new wxChoice(this, ID_CHOICE5, wxDefaultPosition, wxSize(280,37), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE5"));
    akcesoria->Append(_("kartki długopisy"));
    akcesoria->Append(_("karty"));
    akcesoria->Append(_("inne"));
    akcesoria->Append(_("nic"));
    FlexGridSizer23->Add(akcesoria, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(FlexGridSizer23, 1, wxALL|wxEXPAND, 5);
    BoxSizer9->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer7 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText15 = new wxStaticText(this, ID_STATICTEXT15, _("Gra"), wxDefaultPosition, wxSize(115,-1), 0, _T("ID_STATICTEXT15"));
    FlexGridSizer7->Add(StaticText15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL6, wxEmptyString, wxDefaultPosition, wxSize(280,-1), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    TextCtrl1->Disable();
    FlexGridSizer7->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    los_gra = new wxButton(this, ID_BUTTON3, _("Losuj"), wxDefaultPosition, wxSize(90,37), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    FlexGridSizer7->Add(los_gra, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer9->Add(FlexGridSizer7, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer1->Add(BoxSizer9, 1, wxALL|wxEXPAND, 5);
    StaticLine5 = new wxStaticLine(this, ID_STATICLINE5, wxDefaultPosition, wxSize(3,3), wxLI_HORIZONTAL, _T("ID_STATICLINE5"));
    FlexGridSizer1->Add(StaticLine5, 1, wxALL|wxEXPAND, 5);
    BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
    FlexGridSizer12 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer17 = new wxFlexGridSizer(0, 4, 0, 0);
    StaticText16 = new wxStaticText(this, ID_STATICTEXT16, _("Dodaj grę"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
    FlexGridSizer17->Add(StaticText16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    nazwa = new wxTextCtrl(this, ID_TEXTCTRL7, _("nazwa"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
    FlexGridSizer17->Add(nazwa, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText20 = new wxStaticText(this, ID_STATICTEXT20, _("Rodzaj gry"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT20"));
    FlexGridSizer17->Add(StaticText20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    rodz_dod = new wxChoice(this, ID_CHOICE7, wxDefaultPosition, wxSize(-1,37), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE7"));
    rodz_dod->Append(_("karciane"));
    rodz_dod->Append(_("planszowe"));
    rodz_dod->Append(_("inne"));
    FlexGridSizer17->Add(rodz_dod, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer12->Add(FlexGridSizer17, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer16 = new wxFlexGridSizer(0, 2, 0, 0);
    StaticText21 = new wxStaticText(this, ID_STATICTEXT21, _("Akcesoria"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
    FlexGridSizer16->Add(StaticText21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    akc_dod = new wxChoice(this, ID_CHOICE8, wxDefaultPosition, wxSize(-1,37), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE8"));
    akc_dod->Append(_("kartki długopisy"));
    akc_dod->Append(_("karty"));
    akc_dod->Append(_("inne"));
    akc_dod->Append(_("nic"));
    FlexGridSizer16->Add(akc_dod, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer12->Add(FlexGridSizer16, 1, wxALL|wxEXPAND, 5);
    BoxSizer13->Add(FlexGridSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer13 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText17 = new wxStaticText(this, ID_STATICTEXT17, _("Ilość osób"), wxDefaultPosition, wxSize(117,27), 0, _T("ID_STATICTEXT17"));
    FlexGridSizer13->Add(StaticText17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    min = new wxTextCtrl(this, ID_TEXTCTRL9, _("min"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
    FlexGridSizer13->Add(min, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    maks = new wxTextCtrl(this, ID_TEXTCTRL10, _("maks"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
    FlexGridSizer13->Add(maks, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText24 = new wxStaticText(this, ID_STATICTEXT24, wxEmptyString, wxDefaultPosition, wxSize(130,0), 0, _T("ID_STATICTEXT24"));
    FlexGridSizer13->Add(StaticText24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    dodaj = new wxButton(this, ID_BUTTON4, _("dodaj"), wxDefaultPosition, wxSize(-1,37), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    FlexGridSizer13->Add(dodaj, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer13->Add(FlexGridSizer13, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer1->Add(BoxSizer13, 1, wxALL|wxEXPAND, 5);
    StaticLine6 = new wxStaticLine(this, ID_STATICLINE6, wxDefaultPosition, wxSize(3,3), wxLI_HORIZONTAL, _T("ID_STATICLINE6"));
    FlexGridSizer1->Add(StaticLine6, 1, wxALL|wxEXPAND, 5);
    BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    FlexGridSizer9 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText22 = new wxStaticText(this, ID_STATICTEXT22, _("Prawda"), wxDefaultPosition, wxSize(155,-1), 0, _T("ID_STATICTEXT22"));
    FlexGridSizer9->Add(StaticText22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    prawda = new wxButton(this, ID_BUTTON6, _("Losuj"), wxDefaultPosition, wxSize(-1,37), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    FlexGridSizer9->Add(prawda, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer10->Add(FlexGridSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer19 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText23 = new wxStaticText(this, ID_STATICTEXT23, _("Wyzwanie"), wxDefaultPosition, wxSize(155,-1), 0, _T("ID_STATICTEXT23"));
    FlexGridSizer19->Add(StaticText23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    wyzwanie = new wxButton(this, ID_BUTTON7, _("Losuj"), wxDefaultPosition, wxSize(-1,37), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    FlexGridSizer19->Add(wyzwanie, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer10->Add(FlexGridSizer19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer10, 1, wxALL|wxEXPAND, 5);
    StaticLine7 = new wxStaticLine(this, ID_STATICLINE7, wxDefaultPosition, wxSize(10,3), wxLI_HORIZONTAL, _T("ID_STATICLINE7"));
    FlexGridSizer1->Add(StaticLine7, 1, wxALL|wxEXPAND, 5);
    BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    wyjdz = new wxButton(this, ID_BUTTON8, _("Wyjdź"), wxDefaultPosition, wxSize(-1,37), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    BoxSizer16->Add(wyjdz, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    SetSizer(FlexGridSizer1);
    Layout();

    Connect(ID_TEXTCTRL4,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&FunDialog::OnwiekText);
    Connect(ID_SPINCTRL1,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&FunDialog::Onilosc_osobChange);
    Connect(ID_CHOICE6,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&FunDialog::Onrodz_filmuSelect);
    Connect(ID_TEXTCTRL12,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&FunDialog::OnfilmText);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FunDialog::Onlos_filmClick);
    Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&FunDialog::OnkuchniaSelect);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FunDialog::Onlos_kuchniaClick);
    Connect(ID_CHOICE2,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&FunDialog::OnrestauracjaSelect);
    Connect(ID_CHOICE3,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&FunDialog::OnmuzykaSelect);
    Connect(ID_CHOICE4,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&FunDialog::OngraSelect);
    Connect(ID_CHOICE5,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&FunDialog::OnakcesoriaSelect);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FunDialog::Onlos_graClick);
    Connect(ID_TEXTCTRL7,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&FunDialog::OnnazwaText);
    Connect(ID_CHOICE7,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&FunDialog::Onrodz_dodSelect);
    Connect(ID_CHOICE8,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&FunDialog::Onakc_dodSelect);
    Connect(ID_TEXTCTRL9,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&FunDialog::OnminText);
    Connect(ID_TEXTCTRL10,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&FunDialog::OnmaksText);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FunDialog::OndodajClick);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FunDialog::OnprawdaClick);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FunDialog::OnwyzwanieClick);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FunDialog::OnwyjdzClick);
    //*)

    odczytajRestauracje("dane/jedzenie/restauracje.txt");
    odczytajJedzenie("dane/jedzenie/meksykanskie.txt", MEKSYKANSKIE);
    odczytajJedzenie("dane/jedzenie/amerykanskie.txt", AMERYKANSKIE);
    odczytajJedzenie("dane/jedzenie/desery.txt", DESERY);
    odczytajJedzenie("dane/jedzenie/fastfood.txt", FAST_FOOD);
    odczytajJedzenie("dane/jedzenie/indyjska.txt", INDYJSKIE);
    odczytajJedzenie("dane/jedzenie/kebaby.txt", KEBABY);
    odczytajJedzenie("dane/jedzenie/polskie.txt", POLSKIE);
    odczytajJedzenie("dane/jedzenie/sushi.txt", SUSHI);
    odczytajJedzenie("dane/jedzenie/wegetarianskie.txt", WEGETARIANSKIE);


    odczytajAlkohol("dane/alkohole/meksykanskie.txt", MEKSYKANSKIE);
    odczytajAlkohol("dane/alkohole/amerykanskie.txt", AMERYKANSKIE);
    odczytajAlkohol("dane/alkohole/desery.txt", DESERY);
    odczytajAlkohol("dane/alkohole/fastfood.txt", FAST_FOOD);
    odczytajAlkohol("dane/alkohole/indyjska.txt", INDYJSKIE);
    odczytajAlkohol("dane/alkohole/kebaby.txt", KEBABY);
    odczytajAlkohol("dane/alkohole/polskie.txt", POLSKIE);
    odczytajAlkohol("dane/alkohole/sushi.txt", SUSHI);
    odczytajAlkohol("dane/alkohole/wegetarianskie.txt", WEGETARIANSKIE);


    odczytajFilmy("dane/filmy/akcji.txt", AKCJI);
    odczytajFilmy("dane/filmy/dramat.txt", DRAMAT);
    odczytajFilmy("dane/filmy/horrory.txt", HORROR);
    odczytajFilmy("dane/filmy/komedie_akcji.txt", KOMEDIA_AKCJI);
    odczytajFilmy("dane/filmy/kryminaly.txt", KRYMINAL);
    odczytajFilmy("dane/filmy/przygodowe.txt", PRZYGODOWY);
    odczytajFilmy("dane/filmy/sci-fi.txt", SCI_FI);
    odczytajFilmy("dane/filmy/thrillery.txt", THRILLER);
    odczytajFilmy("dane/filmy/animowane.txt", ANIMOWANY);
    odczytajFilmy("dane/filmy/fantasy.txt", FANTASY);
    odczytajFilmy("dane/filmy/komedie.txt", KOMEDIA);
    odczytajFilmy("dane/filmy/komedie_romantyczne.txt", KOMEDIA_ROMANTYCZNA);
    odczytajFilmy("dane/filmy/mystery.txt", MYSTERY);
    odczytajFilmy("dane/filmy/romantyczne.txt", ROMANTYCZNY);
    odczytajFilmy("dane/filmy/superbohaterzy.txt", SUPERBOHATERZY);

    odczytajGry("dane/reszta/gry.txt");
    odczytajPrawdy("dane/reszta/pytania.txt");
    odczytajWyzwania("dane/reszta/wyzwania.txt");
    odczytajMuzyke("dane/reszta/muzyka.txt");

}

FunDialog::~FunDialog()
{
    //(*Destroy(FunDialog)
    //*)
}

void FunDialog::OnQuit(wxCommandEvent& event)
{

    Close();
}


wxString s2w(string s) {
return wxString(s.c_str(), wxConvUTF8);
}


void FunDialog::odczytajFilmy(const char* sciezkaPliku, GatunekFilmu gatunek)
{
    string text = odczytajPlik(sciezkaPliku);
    int pozycja = 0;
    int koniecLinii = 0;

    while ((koniecLinii = text.find('\r', pozycja)) != -1)
    {
        string linia = text.substr(pozycja, koniecLinii - pozycja);
        filmy[gatunek].emplace_back(linia);
        pozycja = koniecLinii + 1;
    }
}

void FunDialog::odczytajJedzenie(const char* sciezkaPliku, TypJedzenia typ)
{

    string text = odczytajPlik(sciezkaPliku);
    int koniecLinii = 0;

    while ((koniecLinii = text.find('\r')) != -1)
    {
        string linia = text.substr(0, koniecLinii);
        text = text.substr(koniecLinii + 1);
        jedzenie[typ].emplace_back(linia);
    }
    cout << "jedzenie " << typ << " " << jedzenie[typ].size() << '\n';
}

void FunDialog::odczytajAlkohol(const char* sciezkaPliku, TypJedzenia typ)
{

    string text = odczytajPlik(sciezkaPliku);
    int pozycja = 0;
    int koniecLinii = 0;

    string linia;
    while ((koniecLinii = text.find('\r', pozycja)) != -1)
    {
        linia = text.substr(pozycja, koniecLinii - pozycja);
        alkohole[typ].push_back(linia);
        pozycja = koniecLinii + 1;
    }
    linia = text.substr(pozycja);
    alkohole[typ].push_back(linia);
}

void FunDialog::odczytajMuzyke(const char* sciezkaPliku)
{
    string text = odczytajPlik(sciezkaPliku);
    int koniecLinii = 0;

    gatunkiMuzyki.resize(ILOSC_GATUNKOW_MUZYKI);

    while ((koniecLinii = text.find('\r')) != -1)
    {
        string linia = text.substr(0, koniecLinii);
        text = text.substr(koniecLinii + 1);

        int przecinek = linia.find(',');
        string gatunekStr = linia.substr(0, przecinek);
        string adresStrony = linia.substr(przecinek + 1);

        GatunekMuzyki gatunekMuzyki = toGatunekMuzyki(gatunekStr);

        gatunkiMuzyki[gatunekMuzyki] = adresStrony;
    }
}

void FunDialog::odczytajGry(const char* sciezkaPliku)
{
    string text = odczytajPlik(sciezkaPliku);
    int koniecLinii = 0;

    while ((koniecLinii = text.find('\r')) != -1)
    {
        string linia = text.substr(0, koniecLinii);
        text = text.substr(koniecLinii + 1);
        Gra gra(linia);

        gry[gra.getTyp()].push_back(gra);
    }
}
void FunDialog::odczytajPrawdy(const char* sciezkaPliku)
{
    string text = odczytajPlik(sciezkaPliku);
    int koniecLinii = 0;

    while ((koniecLinii = text.find('\r')) != -1)
    {
        string linia = text.substr(0, koniecLinii);
        text = text.substr(koniecLinii + 1);
        prawdy.push_back(linia);
    }
}
void FunDialog::odczytajWyzwania(const char* sciezkaPliku)
{
    string text = odczytajPlik(sciezkaPliku);
    int koniecLinii = 0;

    while ((koniecLinii = text.find('\r')) != -1)
    {
        string linia = text.substr(0, koniecLinii);
        text = text.substr(koniecLinii + 1);
        wyzwania.push_back(linia);
    }
}
void FunDialog::odczytajRestauracje(const char* sciezkaPliku)
{
    string text = odczytajPlik(sciezkaPliku);
    int koniecLinii = 0;

    while ((koniecLinii = text.find('\r')) != -1)
    {
        string linia = text.substr(0, koniecLinii);
        text = text.substr(koniecLinii + 1);

        int przecinek = linia.find(',');
        string restauracjaStr = linia.substr(0, przecinek);
        string linkRestauracji = linia.substr(przecinek + 1);

        restauracje[restauracjaStr] = linkRestauracji;
    }

    cout << restauracje.size() << '\n';
}

void FunDialog::OnwiekText(wxCommandEvent& event)
{
    int wiekInt = getInt(wiek);
    if (wiekInt >= 60)
    {
        ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/old.png"))));
    }
    else if (wiekInt >= 18)
    {
        ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/medium_age.png"))));
    }
    else
    {
        ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/baby.png"))));
    }
}

void FunDialog::OnkuchniaSelect(wxCommandEvent& event)
{
}


void FunDialog::Onlos_kuchniaClick(wxCommandEvent& event)
{

    ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/yummy.png"))));

    int wybranaKuchnia = kuchnia->GetCurrentSelection();

    const vector<Jedzenie>& jedzenieKuchni = jedzenie[wybranaKuchnia];
    int wylosowane = losuj(jedzenieKuchni.size());

    const Jedzenie& wylosowaneJedzenie = jedzenieKuchni[wylosowane];
    const vector<string>& wylosowaneRestauracje = wylosowaneJedzenie.getRestauracje();

    danie->Clear();
    *danie << wylosowaneJedzenie.getNazwa();

    restauracja->Clear();
    for (int i = 0; i < wylosowaneRestauracje.size(); ++i) {
        restauracja->AppendString(wxString((wylosowaneRestauracje[i]).c_str(), wxConvUTF8));
    }
    //restauracja->SetSelection(0);

    string wiekStr = wiek->GetValue().ToStdString();
    try {
        int wiek = stoi(wiekStr);

        const vector<string>& alkoholeKuchni = alkohole[wybranaKuchnia];

        if (wiek > 18 && alkoholeKuchni.size() > 0)
        {
            if (alkoholeKuchni.size() > 0)
            {
                int wylosowanyAlkohol = losuj(alkoholeKuchni.size());
                alkohol->Clear();
                *alkohol << wxString((alkoholeKuchni[wylosowanyAlkohol]).c_str(), wxConvUTF8);
            }
            else
            {
                alkohol->Clear();
                *alkohol << "brak alkoholi";
            }
        }
        else
        {
            alkohol->Clear();
            *alkohol << "Jestes za mlody";
        }
    }
    catch (invalid_argument e) {
        // kod tutaj trafi tylko kiedy podany wiek nie będzie liczbą całkowitą
        // niepoprawny wiek
    }
}

void FunDialog::OnrestauracjaSelect(wxCommandEvent& event)
{
    string restauracjaStr = restauracja->GetStringSelection().ToStdString();
    cout << "szukana restauracja " << restauracjaStr << '\n';
    string url;

    try {
        url = restauracje.at(restauracjaStr);
        cout << "wybrana restauracja " << url << '\n';
    }
    catch (out_of_range exception) {
        cout << "nie ma linku dla podanej restauracji\n";
        url = "http://pyszne.pl";
    }

    HyperlinkCtrl2->SetURL(url);
}

void FunDialog::OnmuzykaSelect(wxCommandEvent& event)
{
    ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/music.png"))));
    int wybranaMuzyka = muzyka->GetCurrentSelection();
    HyperlinkCtrl1->SetURL(gatunkiMuzyki[wybranaMuzyka]);
}

void FunDialog::Onlos_graClick(wxCommandEvent& event)
{
   ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/gry.png"))));

    TypGry wybranyTypGry = (TypGry)gra->GetCurrentSelection();
    Akcesoria wybraneAkcesorium = (Akcesoria) akcesoria->GetCurrentSelection();

    int liczbaGraczy = ilosc_osob->GetValue();

    const vector<Gra>& wybraneGry = gry[wybranyTypGry];
    vector<Gra> gryDoWyboru;
    for (const auto& gra : wybraneGry)
    {
        if (gra.getAkcesoria() == wybraneAkcesorium
            && liczbaGraczy >= gra.getMinLiczbaGraczy()
            && liczbaGraczy <= gra.getMaxLiczbaGraczy())

            gryDoWyboru.push_back(gra);
    }

    if (gryDoWyboru.size() == 0)
    {
        TextCtrl1->SetValue("Nie ma takich gier");
    }
    else
    {
        int wylosowanyIndeks = losuj(gryDoWyboru.size());
        string pom = (gryDoWyboru[wylosowanyIndeks].getNazwa());
        TextCtrl1->SetValue(wxString(pom.c_str(), wxConvUTF8));
        // message box z instrukcją gry
    }
}

void FunDialog::OngraSelect(wxCommandEvent& event)
{
}

void FunDialog::OnakcesoriaSelect(wxCommandEvent& event)
{
}

void FunDialog::OnnazwaText(wxCommandEvent& event)
{
}

void FunDialog::OnrodzText(wxCommandEvent& event)
{
}

void FunDialog::OnakcText(wxCommandEvent& event)
{
}

void FunDialog::OnminText(wxCommandEvent& event)
{
}

void FunDialog::OnmaksText(wxCommandEvent& event)
{
}

void FunDialog::OndodajClick(wxCommandEvent& event)
{

    string nazwaGry = nazwa->GetValue().ToStdString();
    TypGry typGry = (TypGry)rodz_dod->GetCurrentSelection();
    Akcesoria akcesoriaGry = (Akcesoria)akc_dod->GetCurrentSelection();
    int minLiczbaGraczy = getInt(min);
    int maxLiczbaGraczy = getInt(maks);

    bool graIstnieje = false;
    for (int i = 0; i < ILOSC_TYPOW_GIER; ++i)
    {
        for (const Gra& gra : gry[(TypGry) i])
        {
            if (nazwaGry == gra.getNazwa())
            {
                graIstnieje = true;
            }
        }
    }
    if (graIstnieje)
    {
        nazwa->SetValue("nazwa");
        min->SetValue("min");
        maks->SetValue("maks");
        wxMessageBox("Gra juz istnieje");
    }
    else
    {
        Gra gra(nazwaGry, typGry, minLiczbaGraczy, maxLiczbaGraczy, akcesoriaGry);
        gry[typGry].push_back(gra);

        gra.zapisz();

        wxMessageBox("zapisano gre");
    }
}

void FunDialog::OnfilmText(wxCommandEvent& event)
{
}


void FunDialog::Onlos_filmClick(wxCommandEvent& event)
{

    ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/film.png"))));

    int gatunek = rodz_filmu->GetCurrentSelection();
    const vector<Film>& wybraneFilmy = filmy[gatunek];
    int wiekInt = getInt(wiek);

    int wymaganyWiek;
    Film const* wylosowanyFilm;

    do
    {
        int indeksFilmu = losuj(wybraneFilmy.size());
        wylosowanyFilm = &wybraneFilmy[indeksFilmu];

        wymaganyWiek = wylosowanyFilm->getWymaganyWiek();

    } while (wiekInt < wymaganyWiek);
    string pom = (wylosowanyFilm->getTytul());
    film->SetValue(wxString(pom.c_str(), wxConvUTF8));
}

void FunDialog::Onrodz_filmuSelect(wxCommandEvent& event)
{
      //Onlos_filmClick(event);
}

void FunDialog::OnChoice2Select(wxCommandEvent& event)
{
}

void FunDialog::Onrodz_dodSelect(wxCommandEvent& event)
{
}

void FunDialog::Onakc_dodSelect(wxCommandEvent& event)
{
}

void FunDialog::OnprawdaClick(wxCommandEvent& event)
{
    ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/prawda.png"))));

    int indeks = losuj(prawdy.size());
    const string& text = prawdy[indeks];
    wxString s2w(string text);
    cout << text << '\n';
    wxMessageBox(wxString(text.c_str(), wxConvUTF8));

    ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/prawda2.png"))));
}

void FunDialog::OnwyzwanieClick(wxCommandEvent& event)
{
    ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/wyzwanie.png"))));

    int indeks = losuj(wyzwania.size());
    const string& text = wyzwania[indeks];
    wxString s2w(string text);
    cout << text << '\n';
    wxMessageBox(wxString(text.c_str(), wxConvUTF8));

    ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/wyzwanie2.png"))));
}

void FunDialog::OnwyjdzClick(wxCommandEvent& event)
{
    ikonka->SetBitmap(wxBitmap(wxImage(_T("dane/ikonki/bye.png"))));
    wxTimer* timer = new wxTimer(this);
    Connect(timer->GetId(), wxEVT_TIMER, wxTimerEventHandler(FunDialog::opoznioneZamkniecie), NULL, this);
    timer->StartOnce(400);
}
void FunDialog::opoznioneZamkniecie(wxTimerEvent& event)
{
    Close();
}
int FunDialog::losuj(int zakres) const
{
    return rand() % zakres;
}

int FunDialog::getInt(wxTextCtrl* widget) const
{
    try {
        string wiekStr = widget->GetValue().ToStdString();
        int wiek = stoi(wiekStr);
        return max(0, wiek);
    }
    catch (...) {
        // .. nie da się zamienić napisu na liczbę
        return 0;
    }
}

void FunDialog::Onilosc_osobChange(wxSpinEvent& event)
{
    if (ilosc_osob->GetValue() < 1) {
        ilosc_osob->SetValue(1);
    }
}
