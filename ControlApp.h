#ifndef CONTROLAPP_H
#define CONTROLAPP_H

#include <QMainWindow>

class ControlStartupScreen;
class ControlRegisterScreen;
class QVBoxLayout;
class QStackedWidget;

class ControlApp : public QMainWindow
{
    Q_OBJECT

public:
    ControlApp(QWidget *parent = 0);
    ~ControlApp();

private:
    void loadStyleSheet(const QString& sheetName);
    
    ControlStartupScreen*   m_pStartupScreen;
    ControlRegisterScreen*  m_pRegisterScreen;
    QVBoxLayout*            m_pLayout;
    QStackedWidget*         m_pStackedWidget;
};

#endif // CONTROLAPP_H
