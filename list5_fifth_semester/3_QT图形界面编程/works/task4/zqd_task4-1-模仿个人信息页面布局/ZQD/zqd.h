#ifndef ZQD_H
#define ZQD_H

#include <QDialog>

namespace Ui {
class ZQD;
}

class ZQD : public QDialog
{
    Q_OBJECT

public:
    explicit ZQD(QWidget *parent = 0);
    ~ZQD();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ZQD *ui;
};

#endif // ZQD_H
