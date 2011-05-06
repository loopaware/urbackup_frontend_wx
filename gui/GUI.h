﻿///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI__
#define __GUI__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/listbox.h>
#include <wx/choice.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class GUISettings
///////////////////////////////////////////////////////////////////////////////
class GUISettings : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrl1;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrl2;
		wxStaticText* m_staticText4;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrl21;
		wxStaticText* m_staticText41;
		
		wxCheckBox* m_checkBox1;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl22;
		wxStaticText* m_staticText42;
		wxStaticText* m_staticText30;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textCtrl13;
		wxStaticText* m_staticText10;
		wxTextCtrl* m_textCtrl131;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_textCtrl132;
		wxStaticText* m_staticText12;
		wxTextCtrl* m_textCtrl133;
		wxStaticText* m_staticText29;
		wxStaticText* m_staticText14;
		wxTextCtrl* m_textCtrl134;
		wxStaticText* m_staticText15;
		wxTextCtrl* m_textCtrl135;
		wxStaticText* m_staticText16;
		wxTextCtrl* m_textCtrl136;
		wxStaticText* m_staticText17;
		wxTextCtrl* m_textCtrl137;
		wxStaticText* m_staticText28;
		wxStaticText* m_staticText25;
		wxTextCtrl* m_textCtrl15;
		wxStaticText* m_staticText26;
		wxTextCtrl* m_textCtrl16;
		wxStaticText* m_staticText27;
		wxTextCtrl* m_textCtrl17;
		wxStaticText* m_staticText281;
		wxTextCtrl* m_textCtrl19;
		wxStaticText* m_staticText291;
		
		wxButton* m_button1;
		wxButton* m_button2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnDisableImageBackups( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOkClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbortClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUISettings( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Einstellungen"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );
		~GUISettings();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class GUILogfiles
///////////////////////////////////////////////////////////////////////////////
class GUILogfiles : public wxDialog 
{
	private:
	
	protected:
		wxListBox* m_listBox1;
		
		wxStaticText* m_staticText5;
		wxChoice* m_choice1;
		wxTextCtrl* m_textCtrl3;
		
		wxButton* m_button5;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnLogEntrySelect( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLoglevelChange( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExitClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUILogfiles( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Logs"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 703,522 ), long style = wxDEFAULT_DIALOG_STYLE );
		~GUILogfiles();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class GUIInfo
///////////////////////////////////////////////////////////////////////////////
class GUIInfo : public wxDialog 
{
	private:
	
	protected:
		
		
		wxStaticBitmap* m_bitmap1;
		
		wxStaticText* m_staticText21;
		wxStaticText* m_staticText22;
		wxStaticText* m_staticText23;
		wxTextCtrl* m_textCtrl14;
		
		
		wxButton* m_button4;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnOKClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIInfo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Informationen"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 420,265 ), long style = wxDEFAULT_DIALOG_STYLE );
		~GUIInfo();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class GUIConfigPath
///////////////////////////////////////////////////////////////////////////////
class GUIConfigPath : public wxDialog 
{
	private:
	
	protected:
		
		wxListBox* listbox;
		wxStaticText* m_staticText27;
		wxTextCtrl* m_textCtrl18;
		
		wxButton* m_button5;
		wxButton* m_button6;
		
		wxButton* m_button7;
		wxButton* m_button8;
		
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnPathSelected( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNameTextChange( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickOk( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickAbort( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickNew( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClickDel( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIConfigPath( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Pfade hinzufügen und entfernen"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~GUIConfigPath();
	
};

#endif //__GUI__