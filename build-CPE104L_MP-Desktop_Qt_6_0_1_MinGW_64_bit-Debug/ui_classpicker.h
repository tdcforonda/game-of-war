/********************************************************************************
** Form generated from reading UI file 'classpicker.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSPICKER_H
#define UI_CLASSPICKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_classPicker
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *start_game;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *randomize_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *classPicker)
    {
        if (classPicker->objectName().isEmpty())
            classPicker->setObjectName(QString::fromUtf8("classPicker"));
        classPicker->resize(800, 600);
        centralwidget = new QWidget(classPicker);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 130, 211, 181));
        label->setPixmap(QPixmap(QString::fromUtf8("pixel.gif")));
        label->setScaledContents(true);
        start_game = new QPushButton(centralwidget);
        start_game->setObjectName(QString::fromUtf8("start_game"));
        start_game->setGeometry(QRect(330, 400, 80, 22));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(140, 330, 131, 22));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(490, 330, 131, 22));
        randomize_button = new QPushButton(centralwidget);
        randomize_button->setObjectName(QString::fromUtf8("randomize_button"));
        randomize_button->setGeometry(QRect(640, 330, 80, 22));
        classPicker->setCentralWidget(centralwidget);
        menubar = new QMenuBar(classPicker);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        classPicker->setMenuBar(menubar);
        statusbar = new QStatusBar(classPicker);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        classPicker->setStatusBar(statusbar);

        retranslateUi(classPicker);

        QMetaObject::connectSlotsByName(classPicker);
    } // setupUi

    void retranslateUi(QMainWindow *classPicker)
    {
        classPicker->setWindowTitle(QCoreApplication::translate("classPicker", "MainWindow", nullptr));
        label->setText(QString());
        start_game->setText(QCoreApplication::translate("classPicker", "Start", nullptr));
        randomize_button->setText(QCoreApplication::translate("classPicker", "Randomize", nullptr));
    } // retranslateUi

};

namespace Ui {
    class classPicker: public Ui_classPicker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSPICKER_H
