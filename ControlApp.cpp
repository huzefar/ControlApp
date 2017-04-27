#include <QtCore/QFile>
#include <QApplication>

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
    
    setMinimumSize(750, 1334);
//    setWindowFlags(Qt::Max);
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

    qApp->setStyleSheet(styleSheet);
}
