#ifndef CONTROLLOGINSCREEN_H
#define CONTROLLOGINSCREEN_H

#include <QWidget>

class QLineEdit;
class QPushButton;
class QVBoxLayout;
class ControlApp;

class ControlLoginScreen : public QWidget
{
    Q_OBJECT
public:
    explicit ControlLoginScreen(ControlApp *parent = 0);

signals:

public slots:

private:
    QLineEdit*      m_pEmail;
    QLineEdit*      m_pPassword;
    QPushButton*    m_pSignInButton;
    QVBoxLayout*    m_pLayout;
};

#endif // CONTROLLOGINSCREEN_H
