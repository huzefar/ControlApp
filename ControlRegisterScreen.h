#ifndef CONTROLREGISTERSCREEN_H
#define CONTROLREGISTERSCREEN_H

#include <QWidget>

class ControlApp;
class QLineEdit;
class QPushButton;
class QVBoxLayout;

class ControlRegisterScreen : public QWidget
{
    Q_OBJECT
public:
    explicit ControlRegisterScreen(ControlApp* parent = 0);
    
private:
    QLineEdit*      m_pEmail;
    QLineEdit*      m_pConfirmEmail;
    QLineEdit*      m_pPassword;
    QPushButton*    m_pNextButton;
    QVBoxLayout*    m_pLayout;
};

#endif // CONTROLREGISTERSCREEN_H
