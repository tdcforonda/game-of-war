/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signIn
{
public:
    QWidget *centralwidget;
    QLabel *signInLabe;
    QTextEdit *username_text;
    QLabel *username_label;
    QLabel *password_label;
    QTextEdit *textEdit;
    QPushButton *sign_in_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signIn)
    {
        if (signIn->objectName().isEmpty())
            signIn->setObjectName(QString::fromUtf8("signIn"));
        signIn->resize(800, 600);
        centralwidget = new QWidget(signIn);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        signInLabe = new QLabel(centralwidget);
        signInLabe->setObjectName(QString::fromUtf8("signInLabe"));
        signInLabe->setGeometry(QRect(310, 150, 131, 16));
        signInLabe->setAlignment(Qt::AlignCenter);
        username_text = new QTextEdit(centralwidget);
        username_text->setObjectName(QString::fromUtf8("username_text"));
        username_text->setGeometry(QRect(280, 190, 221, 31));
        username_label = new QLabel(centralwidget);
        username_label->setObjectName(QString::fromUtf8("username_label"));
        username_label->setGeometry(QRect(200, 200, 71, 16));
        password_label = new QLabel(centralwidget);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setGeometry(QRect(200, 260, 71, 16));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(280, 250, 221, 41));
        sign_in_button = new QPushButton(centralwidget);
        sign_in_button->setObjectName(QString::fromUtf8("sign_in_button"));
        sign_in_button->setGeometry(QRect(330, 330, 80, 22));
        signIn->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signIn);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        signIn->setMenuBar(menubar);
        statusbar = new QStatusBar(signIn);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        signIn->setStatusBar(statusbar);

        retranslateUi(signIn);

        QMetaObject::connectSlotsByName(signIn);
    } // setupUi

    void retranslateUi(QMainWindow *signIn)
    {
        signIn->setWindowTitle(QCoreApplication::translate("signIn", "MainWindow", nullptr));
        signInLabe->setText(QCoreApplication::translate("signIn", "Welcome!", nullptr));
        username_label->setText(QCoreApplication::translate("signIn", "Username:", nullptr));
        password_label->setText(QCoreApplication::translate("signIn", "Password:", nullptr));
        sign_in_button->setText(QCoreApplication::translate("signIn", "Sign In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signIn: public Ui_signIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
