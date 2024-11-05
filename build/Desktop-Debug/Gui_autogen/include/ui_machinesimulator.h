/********************************************************************************
** Form generated from reading UI file 'machinesimulator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINESIMULATOR_H
#define UI_MACHINESIMULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MachineSimulator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QTableWidget *registerTable;
    QPushButton *register_clear;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_6;
    QTableWidget *memoryTable;
    QPushButton *clearButton;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *inputLineEdit;
    QPushButton *loadButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *programCounter;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *instruction_register;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *oneCycleButton;
    QPushButton *runAllButton;
    QPushButton *haltButton;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MachineSimulator)
    {
        if (MachineSimulator->objectName().isEmpty())
            MachineSimulator->setObjectName(QString::fromUtf8("MachineSimulator"));
        MachineSimulator->resize(1158, 528);
        centralwidget = new QWidget(MachineSimulator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_9->addWidget(label_5);

        registerTable = new QTableWidget(centralwidget);
        if (registerTable->columnCount() < 3)
            registerTable->setColumnCount(3);
        if (registerTable->rowCount() < 16)
            registerTable->setRowCount(16);
        registerTable->setObjectName(QString::fromUtf8("registerTable"));
        registerTable->setRowCount(16);
        registerTable->setColumnCount(3);
        registerTable->horizontalHeader()->setVisible(true);
        registerTable->horizontalHeader()->setDefaultSectionSize(109);
        registerTable->verticalHeader()->setVisible(false);

        verticalLayout_9->addWidget(registerTable);

        register_clear = new QPushButton(centralwidget);
        register_clear->setObjectName(QString::fromUtf8("register_clear"));

        verticalLayout_9->addWidget(register_clear);


        gridLayout->addLayout(verticalLayout_9, 0, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_10->addWidget(label_6);

        memoryTable = new QTableWidget(centralwidget);
        if (memoryTable->columnCount() < 3)
            memoryTable->setColumnCount(3);
        if (memoryTable->rowCount() < 256)
            memoryTable->setRowCount(256);
        memoryTable->setObjectName(QString::fromUtf8("memoryTable"));
        memoryTable->setRowCount(256);
        memoryTable->setColumnCount(3);
        memoryTable->verticalHeader()->setVisible(false);

        verticalLayout_10->addWidget(memoryTable);


        verticalLayout->addLayout(verticalLayout_10);

        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        verticalLayout->addWidget(clearButton);


        gridLayout->addLayout(verticalLayout, 0, 1, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        inputLineEdit = new QLineEdit(centralwidget);
        inputLineEdit->setObjectName(QString::fromUtf8("inputLineEdit"));

        verticalLayout_2->addWidget(inputLineEdit);

        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        verticalLayout_2->addWidget(loadButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        programCounter = new QLabel(centralwidget);
        programCounter->setObjectName(QString::fromUtf8("programCounter"));

        horizontalLayout_2->addWidget(programCounter);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        instruction_register = new QLabel(centralwidget);
        instruction_register->setObjectName(QString::fromUtf8("instruction_register"));

        horizontalLayout->addWidget(instruction_register);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        oneCycleButton = new QPushButton(centralwidget);
        oneCycleButton->setObjectName(QString::fromUtf8("oneCycleButton"));

        horizontalLayout_8->addWidget(oneCycleButton);

        runAllButton = new QPushButton(centralwidget);
        runAllButton->setObjectName(QString::fromUtf8("runAllButton"));

        horizontalLayout_8->addWidget(runAllButton);

        haltButton = new QPushButton(centralwidget);
        haltButton->setObjectName(QString::fromUtf8("haltButton"));

        horizontalLayout_8->addWidget(haltButton);


        verticalLayout_2->addLayout(horizontalLayout_8);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);

        MachineSimulator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MachineSimulator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1158, 25));
        MachineSimulator->setMenuBar(menubar);
        statusBar = new QStatusBar(MachineSimulator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MachineSimulator->setStatusBar(statusBar);

        retranslateUi(MachineSimulator);

        QMetaObject::connectSlotsByName(MachineSimulator);
    } // setupUi

    void retranslateUi(QMainWindow *MachineSimulator)
    {
        MachineSimulator->setWindowTitle(QCoreApplication::translate("MachineSimulator", "MachineSimulator", nullptr));
        label_5->setText(QCoreApplication::translate("MachineSimulator", "registers table", nullptr));
        register_clear->setText(QCoreApplication::translate("MachineSimulator", "clear registers", nullptr));
        label_6->setText(QCoreApplication::translate("MachineSimulator", "memeory table", nullptr));
        clearButton->setText(QCoreApplication::translate("MachineSimulator", "clear memory", nullptr));
        loadButton->setText(QCoreApplication::translate("MachineSimulator", "load instruction to memeory", nullptr));
        label->setText(QCoreApplication::translate("MachineSimulator", "program counter->", nullptr));
        programCounter->setText(QCoreApplication::translate("MachineSimulator", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MachineSimulator", "instruction register->", nullptr));
        instruction_register->setText(QCoreApplication::translate("MachineSimulator", "TextLabel", nullptr));
        oneCycleButton->setText(QCoreApplication::translate("MachineSimulator", "run one cycle", nullptr));
        runAllButton->setText(QCoreApplication::translate("MachineSimulator", "run all", nullptr));
        haltButton->setText(QCoreApplication::translate("MachineSimulator", "halt", nullptr));
#if QT_CONFIG(accessibility)
        statusBar->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
    } // retranslateUi

};

namespace Ui {
    class MachineSimulator: public Ui_MachineSimulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINESIMULATOR_H
