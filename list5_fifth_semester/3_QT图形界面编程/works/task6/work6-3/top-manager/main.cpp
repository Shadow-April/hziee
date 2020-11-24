#include "zqd.h"
#include <QApplication>
#include <QProcess>
#include <QWidget>

#include <QTextCodec>
#include "connection.h"
#include "logindialog.h"
#include <QProcess>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QProcess process;
    process.start("C:/Program Files/MySQL/MySQL Server 8.0/bin");

    if(!createConnection()) return 0;

    LoginDialog dlg;
    ZQD w;
    if(dlg.exec()==QDialog::Accepted){
        w.show();
        return a.exec();
    } else {
        return 0;
    }

}
