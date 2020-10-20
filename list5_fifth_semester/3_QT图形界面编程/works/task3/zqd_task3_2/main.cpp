#include "zqd.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    zqd w;
    w.show();

    return a.exec();
}
