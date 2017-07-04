#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include "ControlApp.h"

#include "ControlRegisterScreen.h"

ControlRegisterScreen::ControlRegisterScreen(ControlApp* parent)
                     : QWidget(parent)
                     , m_pEmail(Q_NULLPTR)
                     , m_pConfirmEmail(Q_NULLPTR)
                     , m_pPassword(Q_NULLPTR)
                     , m_pNextButton(Q_NULLPTR)
                     , m_pLayout(Q_NULLPTR)
{
    setObjectName("ControlRegisterScreen");
    setMinimumSize(450, 600);
    m_pEmail = new QLineEdit(this);
    m_pEmail->setPlaceholderText("email");
    m_pEmail->setMinimumWidth(300);
    
    m_pConfirmEmail = new QLineEdit(this);
    m_pConfirmEmail->setPlaceholderText("confirm email");
    m_pConfirmEmail->setMinimumWidth(300);
    
    m_pPassword = new QLineEdit(this);
    m_pPassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    m_pPassword->setPlaceholderText("password");
    m_pPassword->setMinimumWidth(300);

    m_pNextButton = new QPushButton("Next", this);
    m_pNextButton->setMinimumWidth(300);
    
    if (!m_pLayout)
    {
        m_pLayout = new QVBoxLayout(this);
    }
    
//    m_pLayout->addStretch(1);
    m_pLayout->addWidget(m_pEmail, 1, Qt::AlignHCenter);
    m_pLayout->addWidget(m_pConfirmEmail, 1 , Qt::AlignHCenter);
    m_pLayout->addWidget(m_pPassword, 1 , Qt::AlignHCenter);
    m_pLayout->addWidget(m_pNextButton, 1 , Qt::AlignHCenter);
}

