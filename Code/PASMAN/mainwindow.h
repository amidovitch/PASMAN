#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "workwithstorage.h"
#include "workwithwinapi.h"
#include "addpassdialog.h"
#include "generatepassdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void addInformationInTable();

private slots:
    void on_deleteButton_clicked();

    void on_autoButton_clicked();

    void on_addPassword_triggered();

    void on_generatePassword_triggered();

    void on_exit_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
