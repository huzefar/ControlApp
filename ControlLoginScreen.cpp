#include "ControlApp.h"
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

#include "ControlLoginScreen.h"

ControlLoginScreen::ControlLoginScreen(ControlApp *parent)
                  : QWidget(parent)
                  , m_pEmail(Q_NULLPTR)
                  , m_pPassword(Q_NULLPTR)
                  , m_pSignInButton(Q_NULLPTR)
                  , m_pLayout(Q_NULLPTR)
{
    setObjectName("ControlLoginScreen");
    setMinimumSize(450, 600);

    m_pEmail = new QLineEdit(this);
    m_pEmail->setPlaceholderText("email");
    m_pEmail->setMinimumSize(300, 30);

    m_pPassword = new QLineEdit(this);
    m_pPassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    m_pPassword->setPlaceholderText("password");
    m_pPassword->setMinimumSize(300, 30);

    m_pSignInButton = new QPushButton("Sign In", this);
    m_pSignInButton->setMinimumSize(300, 30);

    if (!m_pLayout)
    {
        m_pLayout = new QVBoxLayout(this);
    }

//    m_pLayout->addStretch(1);
    m_pLayout->addWidget(m_pEmail, 1, Qt::AlignHCenter);
    m_pLayout->addWidget(m_pPassword, 1 , Qt::AlignHCenter);
    m_pLayout->addWidget(m_pSignInButton, 1 , Qt::AlignHCenter);

}
