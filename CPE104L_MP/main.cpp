#include "titlescreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    titleScreen w;
    w.show();
    return a.exec();
}
