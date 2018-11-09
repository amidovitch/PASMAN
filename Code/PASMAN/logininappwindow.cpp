#include "logininappwindow.h"
#include "ui_logininappwindow.h"

LoginInAppWindow::LoginInAppWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginInAppWindow)
{
    ui->setupUi(this);
}

LoginInAppWindow::~LoginInAppWindow()
{
    delete ui;
}
