#include "zqd.h"
#include "ui_zqd.h"
#include <QMessageBox>


zqd::zqd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::zqd)
{
    ui->setupUi(this);
}

zqd::~zqd()
{
    delete ui;
}

void zqd::on_QuestionBtn_clicked()
{
    switch(QMessageBox::question(this,tr("问题"),tr("已到达文档结尾,是否从头搜索?"), QMessageBox::Ok|QMessageBox::Cancel, QMessageBox::Ok))
          {
          case QMessageBox::Ok:
            ui->label->setText("Question button / OK");break;
          case QMessageBox::Cancel:
            ui->label->setText("Question button / Cancel");break;
          default: break;
          }
}

void zqd::on_InformationBtn_clicked()
{
    QMessageBox::information(this,"Information",tr("这是信息显示内容"));
}



void zqd::on_WarningBtn_clicked()
{
    switch(QMessageBox::warning(this,tr("警告"),tr("是否保存对文档的修改?"), QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel, QMessageBox::Save))
        {
        case QMessageBox::Save:
          ui->label->setText("Warning button / Save");break;
        case QMessageBox::Discard:
          ui->label->setText("Warning button / Discard");break;
        case QMessageBox::Cancel:
          ui->label->setText("Warning button / Cancel");break;
        default: break;
        }
}



void zqd::on_AboutBtn_clicked()
{
    QMessageBox::about(this, "About", tr("QMessageBox实例"));
    ui->label->setText("About QMessageBox");

}

void zqd::on_CustomBtn_clicked()
{
    QMessageBox customMsgBox;
     customMsgBox.setWindowTitle("Custom message box");
     QPushButton *lockButton = customMsgBox.addButton(tr("Lock"),QMessageBox::ActionRole);
     QPushButton *unlockButton = customMsgBox.addButton(tr("Unlock"),QMessageBox::ActionRole);
     QPushButton *cancelButton = customMsgBox.addButton(QMessageBox::Cancel);
     customMsgBox.setIconPixmap(QPixmap(":/images/11.png"));
     customMsgBox.setText(tr("This is a custom message box"));
     customMsgBox.exec();
     if(customMsgBox.clickedButton() == lockButton)
         ui->label->setText(" Custom MessageBox / Lock ");
     if(customMsgBox.clickedButton() == unlockButton)
         ui->label->setText(" Custom MessageBox / Unlock ");
     if(customMsgBox.clickedButton() == cancelButton)
         ui->label->setText(" Custom MessageBox / Cancel ");

}

void zqd::on_AboutQTBtn_clicked()
{
    QMessageBox::aboutQt(this,"About Qt");
    ui->label->setText("About Qt QMessageBox");

}

void zqd::on_CriticalBtn_clicked()
{
    QMessageBox::critical(this,"Information", tr("致命错误"));
    ui->label->setText("Critical");

}
