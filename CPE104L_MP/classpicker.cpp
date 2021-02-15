#include "classpicker.h"
#include "ui_classpicker.h"

classPicker::classPicker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::classPicker)
{
    /*QMovie *pixel1 = new QMovie("pixel.gif");
    QLabel *newLabel = new QLabel(this);
    newLabel->setMovie(movie);
    movie->start();*/

    ui->setupUi(this);
    this->setWindowTitle("Turn-based Fantasy Game");
}

classPicker::~classPicker()
{
    delete ui;
}

void classPicker::on_start_game_clicked()
{
    /*QString player_class = player_cb.contains("");
    playMode.show();
    close();*/

    if (classPicker::on_player_cb_activated(const QString &arg1)):
    {
        playMode.show();
        close();
    }
}

void classPicker::on_player_cb_activated(const QString &arg1)
{
    QComboBox *playerstatus = new QComboBox();
    const int row = index.row();
    playerstatus->addItem(QString("test").arg(row));

}
