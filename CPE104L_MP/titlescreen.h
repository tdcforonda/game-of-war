#ifndef TITLESCREEN_H
#define TITLESCREEN_H

#include <QMainWindow>
#include "signIn.h"

QT_BEGIN_NAMESPACE
namespace Ui { class titleScreen; }
QT_END_NAMESPACE

class titleScreen : public QMainWindow
{
    Q_OBJECT

public:
    titleScreen(QWidget *parent = nullptr);
    ~titleScreen();

private slots:
    void on_startButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::titleScreen *ui;

    signIn signIn;

};
#endif // TITLESCREEN_H
