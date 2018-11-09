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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogToStorageDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *masterLine;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer;
    QPushButton *createButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *LogToStorageDialog)
    {
        if (LogToStorageDialog->objectName().isEmpty())
            LogToStorageDialog->setObjectName(QStringLiteral("LogToStorageDialog"));
        LogToStorageDialog->resize(372, 186);
        verticalLayout_6 = new QVBoxLayout(LogToStorageDialog);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_3);

        masterLine = new QLineEdit(LogToStorageDialog);
        masterLine->setObjectName(QStringLiteral("masterLine"));
        masterLine->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(masterLine);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_7);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_11);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_13);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_12);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        createButton = new QPushButton(LogToStorageDialog);
        createButton->setObjectName(QStringLiteral("createButton"));
        createButton->setMinimumSize(QSize(115, 0));

        horizontalLayout_5->addWidget(createButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_15);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_14);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_10);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_6);


        verticalLayout_6->addLayout(horizontalLayout_5);


        retranslateUi(LogToStorageDialog);

        QMetaObject::connectSlotsByName(LogToStorageDialog);
    } // setupUi

    void retranslateUi(QDialog *LogToStorageDialog)
    {
        LogToStorageDialog->setWindowTitle(QApplication::translate("LogToStorageDialog", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        masterLine->setToolTip(QApplication::translate("LogToStorageDialog", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        masterLine->setText(QApplication::translate("LogToStorageDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\262\320\276\320\271 \320\274\320\260\321\201\321\202\320\265\321\200 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        createButton->setText(QApplication::translate("LogToStorageDialog", "\320\222\320\276\320\271\321\202\320\270 \320\262 \321\205\321\200\320\260\320\275\320\270\320\273\320\270\321\211\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogToStorageDialog: public Ui_LogToStorageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGTOSTORAGEDIALOG_H
