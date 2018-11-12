#ifndef CREATESTORAGEDIALOG_H
#define CREATESTORAGEDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "workwithstorage.h"

namespace Ui {
class CreateStorageDialog;
}

class CreateStorageDialog : public QDialog {
    Q_OBJECT

public:
    explicit CreateStorageDialog(QWidget *parent = 0);
    ~CreateStorageDialog();

private slots:
    void on_createButton_clicked();
    void on_createLine_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::CreateStorageDialog *ui;
};

#endif
