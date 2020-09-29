#ifndef ZQD_DM_H
#define ZQD_DM_H

#include <QMainWindow>
#include "point.h"

namespace Ui {
class zqd_dm;
}

class zqd_dm : public QMainWindow
{
    Q_OBJECT

public:
    explicit zqd_dm(QWidget *parent = 0);
    ~zqd_dm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::zqd_dm *ui;
    Point *poi=NULL;
};

#endif // ZQD_DM_H
