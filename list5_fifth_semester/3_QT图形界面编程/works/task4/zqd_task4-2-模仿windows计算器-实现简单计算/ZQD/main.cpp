#include "zqd.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ZQD w;
    w.setWindowTitle("计算器V1.0(189051042 邹桥东)");
    w.show();

    return a.exec();
}
