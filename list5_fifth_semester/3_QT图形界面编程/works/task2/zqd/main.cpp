#include "zqd.h"
#include <QApplication>
#include "logindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ZQD w;
    LoginDialog dlg;


    if(dlg.exec() == QDialog::Accepted)
    {
     //w.setWindowOpacity(0.7);
     w.show();

     return a.exec();
    }

    return 0;
}
