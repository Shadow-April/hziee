#include "logindialog.h"
#include "ui_logindialog.h"
#include<QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    if(ui->usrLineEdit->text()==tr("zouqiaodong")&&ui->pwdLineEdit->text()==tr("189051042"))
    {
        accept();
    } else {
        QMessageBox::warning(this,tr("Warning"),
                             tr("user name or password error!"),
                             QMessageBox::Yes);

        // clear the input_box
        ui->usrLineEdit->clear();
        ui->pwdLineEdit->clear();
        ui->usrLineEdit->setFocus();
    }
}

void LoginDialog::on_exitBtn_clicked()
{

}
