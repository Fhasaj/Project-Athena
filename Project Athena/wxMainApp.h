#pragma once

#include <wx/wxprec.h>
#ifdef WX_PRECOMP
	#include <wx/wx.h>
#endif

class wxMainApp :public wxApp
{
public:
	virtual bool OnInit();				// Creates and shows a window

};

