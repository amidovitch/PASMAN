/********************************************************************************
** Form generated from reading UI file 'logtostoragedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGTOSTORAGEDIALOG_H
#define UI_LOGTOSTORAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_LogToStorageDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LogToStorageDialog)
    {
        if (LogToStorageDialog->objectName().isEmpty())
            LogToStorageDialog->setObjectName(QStringLiteral("LogToStorageDialog"));
        LogToStorageDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(LogToStorageDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(LogToStorageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LogToStorageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LogToStorageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LogToStorageDialog);
    } // setupUi

    void retranslateUi(QDialog *LogToStorageDialog)
    {
        LogToStorageDialog->setWindowTitle(QApplication::translate("LogToStorageDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogToStorageDialog: public Ui_LogToStorageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGTOSTORAGEDIALOG_H
