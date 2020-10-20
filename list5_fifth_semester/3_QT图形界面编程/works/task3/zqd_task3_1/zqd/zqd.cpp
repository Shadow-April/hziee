#include "zqd.h"
#include "ui_zqd.h"
#include <QFileDialog>
#include <QColorDialog>
#include <QDebug>
#include <QFontDialog>


Zqd::Zqd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Zqd)
{
    ui->setupUi(this);
}

Zqd::~Zqd()
{
    delete ui;
}

void Zqd::on_fileDlgBtn_clicked()
{
    QString s=QFileDialog::getOpenFileName(this,"open file dialog", "/","C++files(*.cpp);;C files(*.c);;Head files(*.h)");
         ui->filePathedt->setText(s.toLatin1());
}

void Zqd::on_colorDlgBtn_clicked()
{
    QColor color = QColorDialog::getColor(Qt::red,this,tr("ColorDlg"));
      if(color.isValid())
        {
          //ui->colorFrame->setPalette(QPalette(color));
          //ui->colorFrame->setBackgroundRole(QPalette(color));

          QString crgb = "background: rgb("
                  + QString::number(color.red())
                  + "," + QString::number(color.green()) + ","
                  + QString::number(color.blue()) + ")";
          ui->colorFrame->setStyleSheet(crgb);
          qDebug() << color;
        }
}

void Zqd::on_fontDlgBtn_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok);
    if(ok)
      {
        ui->fontLineEdit->setFont(font);
      }
}
