#ifndef LOGTOSTORAGEDIALOG_H
#define LOGTOSTORAGEDIALOG_H

#include <QDialog>

namespace Ui {
class LogToStorageDialog;
}

class LogToStorageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogToStorageDialog(QWidget *parent = 0);
    ~LogToStorageDialog();

private:
    Ui::LogToStorageDialog *ui;
};

#endif // LOGTOSTORAGEDIALOG_H
