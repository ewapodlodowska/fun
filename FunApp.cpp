/***************************************************************
 * Name:      FunApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Ewa Podlodowska & Sofiya Rylova ()
 * Created:   2022-01-08
 * Copyright: Ewa Podlodowska & Sofiya Rylova ()
 * License:
 **************************************************************/

#include "FunApp.h"

//(*AppHeaders
#include "FunMain.h"
#include <wx/image.h>
//*)
#include <cstdlib>
IMPLEMENT_APP(FunApp);

bool FunApp::OnInit()
{
    srand(time(NULL));
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	FunDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
