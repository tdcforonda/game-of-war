#ifndef PLAYMODE_H
#define PLAYMODE_H

#include <QMainWindow>

namespace Ui {
class playMode;
}

class playMode : public QMainWindow
{
    Q_OBJECT

public:
    explicit playMode(QWidget *parent = nullptr);
    ~playMode();

private:
    Ui::playMode *ui;
};

#endif // PLAYMODE_H
