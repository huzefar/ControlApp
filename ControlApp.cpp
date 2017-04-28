#include <QtCore/QFile>
#include <QApplication>

#include "ControlStartupScreen.h"
#include "ControlApp.h"

ControlApp::ControlApp(QWidget *parent)
    : QMainWindow(parent)
    , m_pStartupScreen(Q_NULLPTR)
{
    setObjectName("ControlApp");

    if (!m_pStartupScreen)
    {
        m_pStartupScreen = new ControlStartupScreen(this);
    }
    
    setMinimumSize(750, 1334);
    loadStyleSheet("stylesheet");
}

ControlApp::~ControlApp()
{
}

void ControlApp::loadStyleSheet(const QString &sheetName)
{
    QFile file(":/qss/style/" + sheetName.toLower() + ".qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());

    setStyleSheet(styleSheet);
//    setStyleSheet("background-image: url(:/resources/background.jpg)");
}
