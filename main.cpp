#include <wx/wx.h>
#include "ui/mainframe.h"

class App : public wxApp {
public:
    virtual bool OnInit();
};

bool App::OnInit() {
    MainFrame *frame = new MainFrame(wxT("My App"));

    frame->Show(true);
    frame->Center();

    return true;
}

wxIMPLEMENT_APP(App);
