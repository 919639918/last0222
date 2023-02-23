/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *portSelect;
    QLabel *label_2;
    QComboBox *comboBox_Bit;
    QLabel *label_3;
    QComboBox *combox_Data;
    QLabel *label_4;
    QComboBox *comBox_End;
    QLabel *label_5;
    QComboBox *comBox_Check;
    QPushButton *btnOpen;
    QPushButton *btnClose;
    QGroupBox *groupBox_2;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit_Send;
    QPushButton *btnSend;
    QPushButton *btn_Clear;
    QCheckBox *sendHex;
    QCheckBox *Asci;
    QCheckBox *sendTimer;
    QSpinBox *spinBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 10, 171, 371));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        portSelect = new QComboBox(groupBox);
        portSelect->setObjectName("portSelect");

        gridLayout->addWidget(portSelect, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_Bit = new QComboBox(groupBox);
        comboBox_Bit->setObjectName("comboBox_Bit");

        gridLayout->addWidget(comboBox_Bit, 1, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        combox_Data = new QComboBox(groupBox);
        combox_Data->setObjectName("combox_Data");

        gridLayout->addWidget(combox_Data, 2, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comBox_End = new QComboBox(groupBox);
        comBox_End->setObjectName("comBox_End");

        gridLayout->addWidget(comBox_End, 3, 1, 1, 2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        comBox_Check = new QComboBox(groupBox);
        comBox_Check->setObjectName("comBox_Check");

        gridLayout->addWidget(comBox_Check, 4, 1, 1, 2);

        btnOpen = new QPushButton(groupBox);
        btnOpen->setObjectName("btnOpen");

        gridLayout->addWidget(btnOpen, 5, 0, 1, 2);

        btnClose = new QPushButton(groupBox);
        btnClose->setObjectName("btnClose");

        gridLayout->addWidget(btnClose, 5, 2, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(240, 10, 551, 241));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(10, 20, 531, 201));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(20, 410, 771, 141));
        textEdit_Send = new QTextEdit(groupBox_3);
        textEdit_Send->setObjectName("textEdit_Send");
        textEdit_Send->setGeometry(QRect(10, 30, 751, 51));
        btnSend = new QPushButton(groupBox_3);
        btnSend->setObjectName("btnSend");
        btnSend->setGeometry(QRect(10, 90, 75, 24));
        btn_Clear = new QPushButton(groupBox_3);
        btn_Clear->setObjectName("btn_Clear");
        btn_Clear->setGeometry(QRect(100, 90, 75, 24));
        sendHex = new QCheckBox(groupBox_3);
        sendHex->setObjectName("sendHex");
        sendHex->setGeometry(QRect(470, 90, 80, 20));
        Asci = new QCheckBox(groupBox_3);
        Asci->setObjectName("Asci");
        Asci->setGeometry(QRect(400, 90, 80, 20));
        sendTimer = new QCheckBox(groupBox_3);
        sendTimer->setObjectName("sendTimer");
        sendTimer->setGeometry(QRect(210, 90, 80, 20));
        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(290, 90, 91, 22));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(240, 270, 551, 111));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName("gridLayout_2");
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 0, 2, 1, 1);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_13, 0, 3, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 1, 2, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 1, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\260\203\350\257\225\345\212\251\346\211\2131.0", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\344\270\262\345\217\243\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        btnOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        btnClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\216\245\346\224\266\345\214\272", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\217\221\351\200\201\345\214\272", nullptr));
        btnSend->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        btn_Clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        sendHex->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        Asci->setText(QCoreApplication::translate("MainWindow", "ASCI", nullptr));
        sendTimer->setText(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\350\247\243\346\236\220", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\351\243\216\351\200\237", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\351\243\216\345\220\221", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
