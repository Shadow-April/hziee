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
    void drawText(int font_size, QString str, int n);
    ~ZQD();

private slots:
    void on_actionNew_File_N_triggered();

    void on_actionShow_Dock_D_triggered();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_fontComboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_pushButton_3_clicked();

private:
    Ui::ZQD *ui;
};

#endif // ZQD_H
