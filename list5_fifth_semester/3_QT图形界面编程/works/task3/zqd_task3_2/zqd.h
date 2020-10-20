#ifndef ZQD_H
#define ZQD_H

#include <QMainWindow>

namespace Ui {
class zqd;
}

class zqd : public QMainWindow
{
    Q_OBJECT

public:
    explicit zqd(QWidget *parent = 0);
    ~zqd();
    void updateLabel();

protected:
  void moveEvent(QMoveEvent*);
  void resizeEvent(QResizeEvent *);

private:
    Ui::zqd *ui;
};

#endif // ZQD_H
