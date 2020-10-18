#ifndef ZQD_H
#define ZQD_H

#include <QMainWindow>
#include "point.h"

namespace Ui {
class ZQD;
}

class ZQD : public QMainWindow
{
    Q_OBJECT

public:
    explicit ZQD(QWidget *parent = 0);
    ~ZQD();

private slots:
    void on_pushButton_clicked();

    void on_showChildButton_clicked();

public slots:
    void showChildDialog();


private:
    Ui::ZQD *ui;
    Point *poi=NULL;
};

#endif // ZQD_H
