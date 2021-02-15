#ifndef SIGNIN_H
#define SIGNIN_H

#include <QMainWindow>
#include "classpicker.h"

namespace Ui {
class signIn;
}

class signIn : public QMainWindow
{
    Q_OBJECT

public:
    explicit signIn(QWidget *parent = nullptr);
    ~signIn();

private slots:
    void on_sign_in_button_clicked();

private:
    Ui::signIn *ui;

    classPicker picker;
};

#endif // SIGNIN_H
