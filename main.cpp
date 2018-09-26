#include "mapper.h"
#include "mytimer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mapper w;
    MyTimer mTimer;
    w.show();

    return a.exec();
}
