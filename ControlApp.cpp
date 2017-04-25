#include "ControlStartupScreen.h"
#include "ControlApp.h"

ControlApp::ControlApp(QWidget *parent)
    : QMainWindow(parent)
    , m_pStartupScreen(Q_NULLPTR)
{
    if (!m_pStartupScreen)
    {
        m_pStartupScreen = new ControlStartupScreen(this);
    }
//    setWindowFlags(Qt::Max);
}

ControlApp::~ControlApp()
{
}
