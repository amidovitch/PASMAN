/********************************************************************************
** Form generated from reading UI file 'addpassdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPASSDIALOG_H
#define UI_ADDPASSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AddPassDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddPassDialog)
    {
        if (AddPassDialog->objectName().isEmpty())
            AddPassDialog->setObjectName(QStringLiteral("AddPassDialog"));
        AddPassDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddPassDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(AddPassDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddPassDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddPassDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddPassDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPassDialog)
    {
        AddPassDialog->setWindowTitle(QApplication::translate("AddPassDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPassDialog: public Ui_AddPassDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPASSDIALOG_H
