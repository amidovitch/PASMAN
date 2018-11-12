#ifndef LOGININAPPWINDOW_H
#define LOGININAPPWINDOW_H

#include <QMainWindow>
#include "logtostoragedialog.h"
#include "createstoragedialog.h"
#include "mainwindow.h"
namespace Ui {
class LoginInAppWindow;
}

class LoginInAppWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit LoginInAppWindow(QWidget *parent = 0);
    ~LoginInAppWindow();

private slots:
    void on_loginButton_clicked();
    void on_createButton_clicked();

private:
    Ui::LoginInAppWindow *ui;
    MainWindow window;
};

#endif
