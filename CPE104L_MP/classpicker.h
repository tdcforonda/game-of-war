#ifndef CLASSPICKER_H
#define CLASSPICKER_H

#include "playmode.h"
#include <QMainWindow>
#include <QPixmap>
#include <QDialog>

namespace Ui {
class classPicker;
}

class classPicker : public QMainWindow
{
    Q_OBJECT

public:
    explicit classPicker(QWidget *parent = nullptr);
    ~classPicker();

private slots:
    void on_start_game_clicked();

private:
    Ui::classPicker *ui;
    playMode playMode;
};

#endif // CLASSPICKER_H
