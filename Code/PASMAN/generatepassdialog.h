#ifndef GENERATEPASSDIALOG_H
#define GENERATEPASSDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "QTime"
#include "workwithwinapi.h"

namespace Ui {
class GeneratePassDialog;
}

class GeneratePassDialog : public QDialog {
    Q_OBJECT

public:
    explicit GeneratePassDialog(QWidget *parent = 0);
    ~GeneratePassDialog();

private slots:
    void on_generateButton_clicked();

private:
    Ui::GeneratePassDialog *ui;
};

#endif
