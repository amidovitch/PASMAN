#ifndef ADDPASSDIALOG_H
#define ADDPASSDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include"workwithstorage.h"

namespace Ui {
class AddPassDialog;
}

class AddPassDialog : public QDialog {
    Q_OBJECT

public:
    explicit AddPassDialog(QWidget *parent = 0);
    ~AddPassDialog();

private slots:
    void on_addButton_clicked();

private:
    Ui::AddPassDialog *ui;
};

#endif
