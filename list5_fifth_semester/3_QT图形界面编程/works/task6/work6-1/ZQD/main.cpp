#include <QCoreApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QStringList>
#include <QSqlQuery>
#include <QtSql/QSqlError>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // output useful databases
    qDebug() << "Available drivers:";
    QStringList drivers = QSqlDatabase::drivers();
    foreach(QString driver, drivers)
        qDebug() << driver;

    // open MySQL
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL3","QPSQL7");
    db.setHostName("localhost");
    db.setDatabaseName("mydata");
    db.setUserName("root");
    db.setPassword("123456");
    if (!db.open()){
        qDebug() << "Failed to connect to root mysql admin";
        qDebug() << db.lastError().text();
    }
    else qDebug() << "open";

    QSqlQuery query(db);

    // attention that varchar should be define length, otherwise error.
    query.exec("create table student(id int primary key,name varchar(20))");

    query.exec("insert into student values(1,'xiaogang')");
    query.exec("insert into student values(2,'xiaoming')");
    query.exec("insert into student values(3,'xiaohong')");

    query.exec("select id,name from student where id >= 2");

    while(query.next())
    {
        int value0 = query.value(0).toInt();
        QString value1 = query.value(1).toString();
        qDebug() << value0 << value1 ;
    }

    return a.exec();
}
