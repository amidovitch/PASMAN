#ifndef LOGTOSTORAGEDIALOG_H
#define LOGTOSTORAGEDIALOG_H

#include <QDialog>
#include "workwithstorage.h"
#include <QMessageBox>
namespace Ui {
class LogToStorageDialog;
}

class LogToStorageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogToStorageDialog(QWidget *parent = 0);
    ~LogToStorageDialog();

private slots:

    void on_createButton_clicked();

    void on_masterLine_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::LogToStorageDialog *ui;
};

#endif // LOGTOSTORAGEDIALOG_H
