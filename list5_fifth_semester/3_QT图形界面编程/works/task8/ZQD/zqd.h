#ifndef ZQD_H
#define ZQD_H

#include <QMainWindow>
#include <QImage>
#include <QTranslator>
#include<QPainter>

namespace Ui {
class ZQD;
}

class ZQD : public QMainWindow
{
    Q_OBJECT

public:
    explicit ZQD(QWidget *parent = 0);
    void drawText(int font_size, QString str, int n);
    QImage sourceIMG;
    QImage saveImg;
    QColor checkColor(int r,int g,int b);
    QImage setBrightness(QImage Img,int iBrightValue);
    QTranslator tsr;
    QImage SideGrandiant(QImage image);
    QImage SideRobertsdiant(QImage image,double scale);
    QImage SideSobeldiant(QImage image,double scale,int type);
    QImage* complex(QImage originImg,QImage nowImage,double oWeight,double nWeight);


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

    void on_openPictureBtn_clicked();

    void on_pushButton_4_clicked();

    void on_meanFilteringBtn_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_brightnessIncBtn_clicked();

    void on_brightnessDecBtn_clicked();

    void on_edgeDetectionBtn_clicked();

    void on_compoundBtn_clicked();

private:
    Ui::ZQD *ui;
};

#endif // ZQD_H
