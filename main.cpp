#include <wx/wx.h>
#include "mainframe.h"

class App : public wxApp {
public:
    virtual bool OnInit();
};

bool App::OnInit() {
    MainFrame *frame = new MainFrame(wxT("My App"));

    frame->Show(true);

    return true;
}

wxIMPLEMENT_APP(App);
