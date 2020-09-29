#include "zqd_dm.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    zqd_dm w;
    w.show();

    return a.exec();
}
