#include <wx/wx.h>

class MainFrame : public wxFrame {
public:
    MainFrame(const wxString &title);

    void OnAbout(wxCommandEvent &event);
    void OnQuit(wxCommandEvent &event);
    
    void CreateMenus();
    void CreateStatusBar();
private:
    DECLARE_EVENT_TABLE();
};

