/********************************************************************************
** Form generated from reading UI file 'titlescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLESCREEN_H
#define UI_TITLESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_titleScreen
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *startButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *titleScreen)
    {
        if (titleScreen->objectName().isEmpty())
            titleScreen->setObjectName(QString::fromUtf8("titleScreen"));
        titleScreen->resize(800, 600);
        centralwidget = new QWidget(titleScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 150, 151, 16));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(220, 350, 80, 22));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 350, 80, 22));
        titleScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(titleScreen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        titleScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(titleScreen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        titleScreen->setStatusBar(statusbar);

        retranslateUi(titleScreen);

        QMetaObject::connectSlotsByName(titleScreen);
    } // setupUi

    void retranslateUi(QMainWindow *titleScreen)
    {
        titleScreen->setWindowTitle(QCoreApplication::translate("titleScreen", "titleScreen", nullptr));
        label->setText(QCoreApplication::translate("titleScreen", "Turn-based Fantasy Game", nullptr));
        startButton->setText(QCoreApplication::translate("titleScreen", "Start", nullptr));
        pushButton_2->setText(QCoreApplication::translate("titleScreen", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class titleScreen: public Ui_titleScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLESCREEN_H
