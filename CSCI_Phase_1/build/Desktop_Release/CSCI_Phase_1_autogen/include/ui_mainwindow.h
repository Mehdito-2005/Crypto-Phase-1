/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QPushButton *Encrypt_Button;
    QPushButton *Decrypt_Button;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QPushButton *NextButton;
    QPushButton *BackButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *Input_FilePath;
    QPushButton *Input_Button;
    QLineEdit *Output_FilePath;
    QPushButton *Output_Button;
    QLabel *label_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QPushButton *Home_Button;
    QPushButton *Exit_button;
    QTextEdit *logTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1539, 1098);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(580, 200, 641, 421));
        Encrypt_Button = new QPushButton(groupBox);
        Encrypt_Button->setObjectName("Encrypt_Button");
        Encrypt_Button->setGeometry(QRect(180, 170, 101, 51));
        Encrypt_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 199, 132);\n"
"font: oblique 14pt \"Sans Serif\";"));
        Decrypt_Button = new QPushButton(groupBox);
        Decrypt_Button->setObjectName("Decrypt_Button");
        Decrypt_Button->setGeometry(QRect(360, 170, 101, 51));
        Decrypt_Button->setMaximumSize(QSize(106, 16777215));
        Decrypt_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 115, 115);\n"
"font: oblique 14pt \"Sans Serif\";"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(590, 310, 621, 421));
        NextButton = new QPushButton(groupBox_2);
        NextButton->setObjectName("NextButton");
        NextButton->setGeometry(QRect(500, 370, 106, 41));
        NextButton->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 181, 246);\n"
"font: oblique 14pt \"Sans Serif\";"));
        BackButton = new QPushButton(groupBox_2);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(10, 370, 106, 41));
        BackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(189, 189, 189);\n"
"font: oblique 14pt \"Sans Serif\";"));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 120, 501, 92));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Input_FilePath = new QLineEdit(layoutWidget);
        Input_FilePath->setObjectName("Input_FilePath");
        Input_FilePath->setReadOnly(true);

        gridLayout->addWidget(Input_FilePath, 0, 0, 1, 1);

        Input_Button = new QPushButton(layoutWidget);
        Input_Button->setObjectName("Input_Button");

        gridLayout->addWidget(Input_Button, 0, 1, 1, 1);

        Output_FilePath = new QLineEdit(layoutWidget);
        Output_FilePath->setObjectName("Output_FilePath");
        Output_FilePath->setReadOnly(true);

        gridLayout->addWidget(Output_FilePath, 1, 0, 1, 1);

        Output_Button = new QPushButton(layoutWidget);
        Output_Button->setObjectName("Output_Button");

        gridLayout->addWidget(Output_Button, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 230, 391, 61));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout = new QVBoxLayout(page_3);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName("groupBox_3");
        Home_Button = new QPushButton(groupBox_3);
        Home_Button->setObjectName("Home_Button");
        Home_Button->setGeometry(QRect(730, 800, 106, 41));
        Home_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(179, 157, 219);\n"
"font: oblique 14pt \"Sans Serif\";"));
        Exit_button = new QPushButton(groupBox_3);
        Exit_button->setObjectName("Exit_button");
        Exit_button->setGeometry(QRect(730, 860, 106, 41));
        Exit_button->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 115, 115);\n"
"font: oblique 14pt \"Sans Serif\";"));
        logTextEdit = new QTextEdit(groupBox_3);
        logTextEdit->setObjectName("logTextEdit");
        logTextEdit->setGeometry(QRect(420, 190, 721, 571));
        logTextEdit->setStyleSheet(QString::fromUtf8(""));
        logTextEdit->setReadOnly(true);

        verticalLayout->addWidget(groupBox_3);

        stackedWidget->addWidget(page_3);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1539, 34));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        Encrypt_Button->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        Decrypt_Button->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "File Selection", nullptr));
        NextButton->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        BackButton->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        Input_FilePath->setPlaceholderText(QCoreApplication::translate("MainWindow", "Input File Path", nullptr));
        Input_Button->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        Output_FilePath->setPlaceholderText(QCoreApplication::translate("MainWindow", "Output File Path", nullptr));
        Output_Button->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "If output File is left blank it will generate it next to it", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        Home_Button->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        Exit_button->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
