#ifndef ZQD_H
#define ZQD_H

#include <QToolBox>
#include <QToolButton>
#include <QMainWindow>

namespace Ui {
class zqd;
}

class zqd : public QToolBox
{
    Q_OBJECT

public:
    explicit zqd(QWidget *parent = 0,Qt::WindowFlags f=0);
    ~zqd();

private:
    Ui::zqd *ui;
    QToolButton *toolBtn1_1;
    QToolButton *toolBtn1_2;
    QToolButton *toolBtn1_3;
    QToolButton *toolBtn1_4;
    QToolButton *toolBtn1_5;
    QToolButton *toolBtn2_1;
    QToolButton *toolBtn2_2;
    QToolButton *toolBtn3_1;
    QToolButton *toolBtn3_2;
};

#endif // ZQD_H
