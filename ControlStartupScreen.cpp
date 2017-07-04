#include <QVBoxLayout>
#include <QPushButton>
#include "ControlApp.h"

#include "ControlStartupScreen.h"
const int FIXED_WIDTH = 300;

ControlStartupScreen::ControlStartupScreen(ControlApp *parent)
                    : QWidget(parent)
                    , m_pCreateAccButton(Q_NULLPTR)
                    , m_pLoginButton(Q_NULLPTR)
                    , m_pLayout(Q_NULLPTR)
{
    setObjectName("ControlStartUpScreen");
    setMinimumSize(450, 600);
    
    if(!m_pCreateAccButton)
    {
        m_pCreateAccButton = new QPushButton("Create Account", this);
        m_pCreateAccButton->setFixedWidth(FIXED_WIDTH);
        connect(m_pCreateAccButton, &QPushButton::clicked, parent, &ControlApp::onCreateAccButtonClicked);
    }
    
    if(!m_pLoginButton)
    {
        m_pLoginButton = new QPushButton("Login", this);
        m_pLoginButton->setFixedWidth(FIXED_WIDTH);
        connect(m_pLoginButton, &QPushButton::clicked, parent, &ControlApp::onLoginButtonClicked);
    }
    
    if (!m_pLayout)
    {
        m_pLayout = new QVBoxLayout(this);
    }
    
    m_pLayout->addStretch(1);
    m_pLayout->addWidget(m_pCreateAccButton, 0 , Qt::AlignHCenter);
    m_pLayout->addSpacing(40);
    m_pLayout->addWidget(m_pLoginButton, 0, Qt::AlignHCenter);
    m_pLayout->addSpacing(100);
    
    setLayout(m_pLayout);
}
