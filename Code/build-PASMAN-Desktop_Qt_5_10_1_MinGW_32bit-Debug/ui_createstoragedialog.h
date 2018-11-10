/********************************************************************************
** Form generated from reading UI file 'createstoragedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATESTORAGEDIALOG_H
#define UI_CREATESTORAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateStorageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *createLine;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *createButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *CreateStorageDialog)
    {
        if (CreateStorageDialog->objectName().isEmpty())
            CreateStorageDialog->setObjectName(QStringLiteral("CreateStorageDialog"));
        CreateStorageDialog->resize(344, 164);
        verticalLayout = new QVBoxLayout(CreateStorageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        createLine = new QLineEdit(CreateStorageDialog);
        createLine->setObjectName(QStringLiteral("createLine"));
        createLine->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(createLine);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        createButton = new QPushButton(CreateStorageDialog);
        createButton->setObjectName(QStringLiteral("createButton"));

        horizontalLayout->addWidget(createButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CreateStorageDialog);

        QMetaObject::connectSlotsByName(CreateStorageDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateStorageDialog)
    {
        CreateStorageDialog->setWindowTitle(QApplication::translate("CreateStorageDialog", "Dialog", nullptr));
        createLine->setText(QApplication::translate("CreateStorageDialog", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\275\320\260\320\264\320\265\320\266\320\275\321\213\320\271 \320\274\320\260\321\201\321\202\320\265\321\200 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        createButton->setText(QApplication::translate("CreateStorageDialog", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\205\321\200\320\260\320\275\320\270\320\273\320\270\321\211\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateStorageDialog: public Ui_CreateStorageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATESTORAGEDIALOG_H
