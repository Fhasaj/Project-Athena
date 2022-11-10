#include "wxMainApp.h"
#include "wxNotepad.h"


wxIMPLEMENT_APP(wxMainApp); // the main.cpp helper class

bool wxMainApp::OnInit()
{
	wxNotepad* frame = new wxNotepad();
	frame->Show(true);
	return true;
}
