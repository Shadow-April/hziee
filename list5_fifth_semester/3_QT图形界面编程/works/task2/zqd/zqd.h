#ifndef ZQD_H
#define ZQD_H

#include <QMainWindow>

namespace Ui {
class ZQD;
}

class ZQD : public QMainWindow
{
    Q_OBJECT

public:
    explicit ZQD(QWidget *parent = 0);
    ~ZQD();

private:
    Ui::ZQD *ui;
};

#endif // ZQD_H
