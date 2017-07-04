#ifndef CONTROLAPP_H
#define CONTROLAPP_H

#include <QMainWindow>

class ControlStartupScreen;
class ControlRegisterScreen;
class ControlLoginScreen;
class QVBoxLayout;
class QStackedWidget;

class ControlApp : public QMainWindow
{
    Q_OBJECT

public:
    ControlApp(QWidget *parent = 0);
    ~ControlApp();

public Q_SLOTS:
    void onCreateAccButtonClicked();
    void onLoginButtonClicked();
    
protected:
    void showEvent(QShowEvent *event) Q_DECL_OVERRIDE;
    
private:
    void loadStyleSheet(const QString& sheetName);
    
    ControlStartupScreen*   m_pStartupScreen;
    ControlRegisterScreen*  m_pRegisterScreen;
    ControlLoginScreen*		m_pLoginScreen;
    QVBoxLayout*            m_pLayout;
    QStackedWidget*         m_pStackedWidget;
};

#endif // CONTROLAPP_H
