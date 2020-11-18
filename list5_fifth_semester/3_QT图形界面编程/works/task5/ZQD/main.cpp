#include "zqd.h"
#include <QApplication>
#include <QSplashScreen>
#include <QElapsedTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap pix(":/image/images/start.png");
    QSplashScreen splash(pix);
    splash.show();
    a.processEvents();

    QElapsedTimer t;
    t.start();
    while(t.elapsed()<2000);

    ZQD w;
    w.show();

    splash.finish(&w);

    return a.exec();
}
