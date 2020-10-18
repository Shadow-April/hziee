#include "user_info.h"
#include "ui_user_info.h"
#include <QMouseEvent>
#include <QWidget>

user_info::user_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user_info)
{
    ui->setupUi(this);
}

user_info::~user_info()
{
    delete ui;
}
