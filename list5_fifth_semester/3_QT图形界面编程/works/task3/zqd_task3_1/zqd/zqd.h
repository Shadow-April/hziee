#ifndef ZQD_H
#define ZQD_H

#include <QMainWindow>

namespace Ui {
class Zqd;
}

class Zqd : public QMainWindow
{
    Q_OBJECT

public:
    explicit Zqd(QWidget *parent = 0);
    ~Zqd();

private slots:
    void on_fileDlgBtn_clicked();

    void on_colorDlgBtn_clicked();

    void on_fontDlgBtn_clicked();

private:
    Ui::Zqd *ui;
};

#endif // ZQD_H
