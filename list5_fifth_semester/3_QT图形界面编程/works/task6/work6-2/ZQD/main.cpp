#include "zqd.h"
#include <QApplication>
#include "connection.h"
#include <QProcess>

#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QProcess process;
    process.start("C:/Program Files/MySQL/MySQL Server 8.0/bin");

    if(!createConnection()) return 1;

    ZQD w;
    w.show();


    return a.exec();
}
