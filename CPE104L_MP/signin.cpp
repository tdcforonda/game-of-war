#include "signIn.h"
#include "ui_signin.h"

signIn::signIn(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signIn)
{
    ui->setupUi(this);
    this->setWindowTitle("Turn-based Fantasy Game");
}

signIn::~signIn()
{
    delete ui;
}

void signIn::on_sign_in_button_clicked()
{
   picker.show();
   close();
}
