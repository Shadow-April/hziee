#ifndef CONNECTION_H
#define CONNECTION_H

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("mydata");
    db.setUserName("root");
    db.setPassword("123456");

    if (!db.open()) {
        QMessageBox::critical(0, QObject::tr("无法打开数据库"),
            "无法创建数据库连接！", QMessageBox::Cancel);
        return false;
    }

    // create table
    // the following code will not to be exec if table exsit...
    QSqlQuery query(db);

    // support ZH
    query.exec("SET NAMES 'Latin1'");

    // create course table
    query.exec(QString("create table course (id int primary key, "
                       "name varchar(20), teacher varchar(20))"));
    query.exec(QString("insert into course values(0, '数学', '邹博士')"));
    query.exec(QString("insert into course values(1, '英语', '海博士')"));
    query.exec(QString("insert into course values(2, '计算机', '白老师')"));

    return true;
}

#endif // CONNECTION_H
