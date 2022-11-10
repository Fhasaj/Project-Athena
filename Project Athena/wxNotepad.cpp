#include "wxNotepad.h"


/*
* Creates a Basic frame withe a menu bar as well as a status bar these can be removed is need be.
*/

wxNotepad::wxNotepad() : wxFrame(nullptr, wxID_ANY, "Project Athena")
{
	wxMenu* menuFile = new wxMenu;
	menuFile->AppendSeparator();
	menuFile->Append(wxID_EXIT);
	
	wxMenu* menuHelp = new wxMenu;
	menuHelp->Append(wxID_ABOUT);

	wxMenuBar* menuBar = new wxMenuBar;
	menuBar->Append(menuFile, "&File");
	menuBar->Append(menuHelp, "&Help");

	SetMenuBar(menuBar);

	CreateStatusBar();
	SetStatusText("Welcome to wxWidgets!");
}
