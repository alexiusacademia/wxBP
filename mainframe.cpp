#include <wx/wx.h>
#include "mainframe.h"

enum {
    ID_ABOUT = 9000,
    ID_QUIT
};

MainFrame::MainFrame(const wxString &title) : wxFrame(NULL, wxID_ANY, title) {
    // Create the menus
    this->CreateMenus();

    // Create a status bar
    this->CreateStatusBar();
}

BEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_MENU(ID_ABOUT, MainFrame::OnAbout)
    EVT_MENU(ID_QUIT, MainFrame::OnQuit)
END_EVENT_TABLE()

void MainFrame::OnAbout(wxCommandEvent &event) {
    wxString msg;
    msg.Printf(wxT("Hello and welcome to my boilerplate!"));
    wxMessageBox(msg, wxT("About wxBP"), wxOK | wxICON_INFORMATION, this);
}

void MainFrame::OnQuit(wxCommandEvent &event) {
    Close();
}

void MainFrame::CreateMenus() {
    wxMenuBar *menuBar = new wxMenuBar();

    wxMenu *mnuFile = new wxMenu();
    wxMenu *mnuHelp = new wxMenu();

    mnuFile->Append(ID_QUIT, wxT("&Quit...\tAlt+Q"), wxT("Quit the window."));
    mnuHelp->Append(ID_ABOUT, wxT("&About...\tAlt+A"), wxT("Show about dialog."));

    menuBar->Append(mnuFile, wxT("&File"));
    menuBar->Append(mnuHelp, wxT("&Help"));
    SetMenuBar(menuBar);
}

void MainFrame::CreateStatusBar() {
    CreateStatusBar(3);
    SetStatusText(wxT("Column 1"), 0);
    SetStatusText(wxT("Column 2"), 1);
    SetStatusText(wxT("Column 3"), 2);
}