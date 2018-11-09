#ifndef LOGININAPPWINDOW_H
#define LOGININAPPWINDOW_H

#include <QMainWindow>

namespace Ui {
class LoginInAppWindow;
}

class LoginInAppWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginInAppWindow(QWidget *parent = 0);
    ~LoginInAppWindow();

private:
    Ui::LoginInAppWindow *ui;
};

#endif // LOGININAPPWINDOW_H
