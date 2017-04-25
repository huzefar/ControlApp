#ifndef CONTROLAPP_H
#define CONTROLAPP_H

#include <QMainWindow>

class ControlStartupScreen;

class ControlApp : public QMainWindow
{
    Q_OBJECT

public:
    ControlApp(QWidget *parent = 0);
    ~ControlApp();

private:
    ControlStartupScreen* m_pStartupScreen;
};

#endif // CONTROLAPP_H
