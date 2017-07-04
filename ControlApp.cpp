#include <QtCore/QFile>
#include <QVBoxLayout>
#include <QApplication>
#include <QStackedWidget>
#include <QDebug>

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

//    if (!m_pStackedWidget)
    {
//        m_pStackedWidget = new QStackedWidget(this);
//        m_pStackedWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    }

//    if (!m_pStartupScreen)
    {
        m_pStartupScreen = new ControlStartupScreen(this);
        m_pStartupScreen->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        m_pStartupScreen->hide();
    }

//    if (!m_pRegisterScreen)
    {
        m_pRegisterScreen = new ControlRegisterScreen(this);
        m_pRegisterScreen->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        m_pRegisterScreen->hide();
    }

//    if (!m_pLayout)
    {
        m_pLayout = new QVBoxLayout(this);
    }

//    m_pStackedWidget->addWidget(m_pStartupScreen);
//    m_pStackedWidget->addWidget(m_pRegisterScreen);

    setMinimumSize(450, 600);
    loadStyleSheet("stylesheet");

//    m_pLayout->addWidget(m_pStackedWidget);
    
    setLayout(m_pLayout);
    
    setWindowTitle("Control App");
//    m_pStackedWidget->setCurrentIndex(1);
}

ControlApp::~ControlApp()
{
}

void ControlApp::onCreateAccButtonClicked()
{
    qDebug() << Q_FUNC_INFO;
    m_pStartupScreen->hide();
    m_pRegisterScreen->show();
}

void ControlApp::onLoginButtonClicked()
{
    qDebug() << Q_FUNC_INFO;
    
}

void ControlApp::showEvent(QShowEvent* event)
{
    QWidget::showEvent(event);
    
    m_pStartupScreen->show();
    m_pRegisterScreen->hide();
}

void ControlApp::loadStyleSheet(const QString &sheetName)
{
    QFile file(":/qss/style/" + sheetName.toLower() + ".qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());

    setStyleSheet(styleSheet);
//    setStyleSheet("background-image: url(:/resources/background.jpg)");
}
