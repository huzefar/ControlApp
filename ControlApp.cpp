#include <QtCore/QFile>
#include <QVBoxLayout>
#include <QApplication>
#include <QStackedWidget>

#include "ControlStartupScreen.h"
#include "ControlRegisterScreen.h"
#include "ControlApp.h"

ControlApp::ControlApp(QWidget *parent)
    : QMainWindow(parent)
    , m_pStartupScreen(Q_NULLPTR)
    , m_pRegisterScreen(Q_NULLPTR)
    , m_pLayout(Q_NULLPTR)
    , m_pStackedWidget(Q_NULLPTR)
{
    setObjectName("ControlApp");

    if (!m_pStartupScreen)
    {
        m_pStartupScreen = new ControlStartupScreen(this);
    }
    if (!m_pRegisterScreen)
    {
        m_pRegisterScreen = new ControlRegisterScreen(this);
    }
    if (!m_pLayout)
    {
        m_pLayout = new QVBoxLayout(this);
    }
    if (!m_pStackedWidget)
    {
        m_pStackedWidget = new QStackedWidget(this);
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
