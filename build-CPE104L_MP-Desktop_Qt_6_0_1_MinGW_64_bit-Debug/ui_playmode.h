/********************************************************************************
** Form generated from reading UI file 'playmode.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYMODE_H
#define UI_PLAYMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_playMode
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *playMode)
    {
        if (playMode->objectName().isEmpty())
            playMode->setObjectName(QString::fromUtf8("playMode"));
        playMode->resize(800, 600);
        centralwidget = new QWidget(playMode);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 290, 80, 22));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 290, 80, 22));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 290, 80, 22));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(110, 330, 80, 22));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(260, 330, 80, 22));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(390, 330, 80, 22));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(110, 370, 80, 22));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(260, 370, 80, 22));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(390, 370, 80, 22));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(540, 290, 80, 22));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(540, 330, 80, 22));
        playMode->setCentralWidget(centralwidget);
        menubar = new QMenuBar(playMode);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        playMode->setMenuBar(menubar);
        statusbar = new QStatusBar(playMode);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        playMode->setStatusBar(statusbar);

        retranslateUi(playMode);

        QMetaObject::connectSlotsByName(playMode);
    } // setupUi

    void retranslateUi(QMainWindow *playMode)
    {
        playMode->setWindowTitle(QCoreApplication::translate("playMode", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("playMode", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("playMode", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("playMode", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("playMode", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("playMode", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("playMode", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("playMode", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("playMode", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("playMode", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("playMode", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("playMode", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class playMode: public Ui_playMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYMODE_H
