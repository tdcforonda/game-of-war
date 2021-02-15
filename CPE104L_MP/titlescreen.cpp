#include "titlescreen.h"
#include "ui_titlescreen.h"

titleScreen::titleScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::titleScreen)
{
    ui->setupUi(this);
    this->setWindowTitle("Turn-based Fantasy Game");
}

titleScreen::~titleScreen()
{
    delete ui;
}


void titleScreen::on_startButton_clicked()
{
   signIn.show();
   close();
}

void titleScreen::on_pushButton_2_clicked()
{
    close();
}
