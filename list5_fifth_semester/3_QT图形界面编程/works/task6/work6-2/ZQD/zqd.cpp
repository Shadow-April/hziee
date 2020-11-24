#include "zqd.h"
#include "ui_zqd.h"

#include <QSqlquery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>


ZQD::ZQD(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZQD)
{
    ui->setupUi(this);

    model = new QSqlTableModel(this);
    model->setTable("course");
    model->select();
    // set Edit method
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView->setModel(model);
}

ZQD::~ZQD()
{
    delete ui;
}

void ZQD::on_submit_modify_clicked()
{
    // 开始事务操作
    model->database().transaction();
    if (model->submitAll()) {
        model->database().commit(); //提交
    } else {
        model->database().rollback(); //回滚
        QMessageBox::warning(this, tr("tableModel"),
                             tr("数据库错误: %1").arg(model->lastError().text()));
    }
}

void ZQD::on_pullback_modify_clicked()
{
    model->revertAll();
}

void ZQD::on_add_record_clicked()
{
    // 获得表的行数
    int rowNum = model->rowCount();

    // 添加一行
    model->insertRow(rowNum);
    model->setData(model->index(rowNum,0), rowNum);
}

void ZQD::on_delete_check_row_clicked()
{
    // 获取选中的行
    int curRow = ui->tableView->currentIndex().row();
    // 删除该行
    model->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除当前行!"),
                  tr("你确定删除当前行吗？"),QMessageBox::Yes, QMessageBox::No);
    if(ok == QMessageBox::No)
    { // 如果不删除，则撤销
        model->revertAll();
    } else { // 否则提交，在数据库中删除该行
        model->submitAll();
    }
}

void ZQD::on_sort_by_id_up_clicked()
{
    //id属性，即第0列，升序排列
    model->setSort(0, Qt::AscendingOrder);
    model->select();
}

void ZQD::on_sort_by_id_down_clicked()
{
    model->setSort(0, Qt::DescendingOrder);
    model->select();
}

void ZQD::on_select_by_option_clicked()
{
    QString name = ui->lineEdit->text();
    //根据姓名进行筛选，一定要使用单引号
    model->setFilter(QString("teacher = '%1'").arg(name));
    model->select();
}

void ZQD::on_select_all_clicked()
{
    model->setTable("course");
    model->select();
}
