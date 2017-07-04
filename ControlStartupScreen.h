#ifndef CONTROLSTARTUPSCREEN_H
#define CONTROLSTARTUPSCREEN_H

#include <QWidget>

class QPushButton;
class QVBoxLayout;
class ControlApp;

class ControlStartupScreen : public QWidget
{
    Q_OBJECT
public:
    explicit ControlStartupScreen(ControlApp* parent = 0);

signals:

public slots:

private:
    QPushButton*    m_pCreateAccButton;
    QPushButton*    m_pLoginButton;
    QVBoxLayout*    m_pLayout;
};

#endif // CONTROLSTARTUPSCREEN_H
