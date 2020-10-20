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

private slots:
    void on_QuestionBtn_clicked();

    void on_InformationBtn_clicked();

    void on_WarningBtn_clicked();

    void on_AboutBtn_clicked();

    void on_CustomBtn_clicked();

    void on_AboutQTBtn_clicked();

    void on_CriticalBtn_clicked();

private:
    Ui::zqd *ui;
};

#endif // ZQD_H
