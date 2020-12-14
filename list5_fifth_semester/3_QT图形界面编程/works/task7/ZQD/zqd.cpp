#include "zqd.h"
#include "ui_zqd.h"
#include <QToolButton>
#include <QSpinBox>
#include <QTextEdit>
#include <QDebug>
#include <QFontDialog>
#include <QMdiSubWindow>
#include <QMainWindow>
#include <QPainter>
#include <QMovie>
#include <QFileDialog>
#include <QLabel>

#include <stdio.h>
#include <stdlib.h>


#pragma pack(2)

// -------------------------------------------------------------------------------------
// 输入字符 -》 生成24位图 -> 打印
// -------------------------------------------------------------------------------------


QString showName = "&";       //填充字符
QString YourName = "邹桥东";   //如果没有输入，默认打印字符
QFont z_font;                 //生成图片中的字体

//------------------------打印图片------------------------------
typedef unsigned short WORD;/*定义WORD为两个字节的类型*/
typedef unsigned long DWORD;/*定义DWORD为e四个字节的类型*/

/*位图文件头*/
typedef struct BMP_FILE_HEADER
{
    WORD bType; /* 文件标识符*/
    DWORD bSize; /* 文件的大小*/
    WORD bReserved1; /* 保留值,必须设置为*/
    WORD bReserved2; /* 保留值,必须设置为*/
    DWORD bOffset; /* 文件头的最后到图像数据位开始的偏移量*/
} BMPFILEHEADER;

/*位图信息头*/
typedef struct BMP_INFO
{
    DWORD bInfoSize; /* 信息头的大小*/
    DWORD bWidth; /* 图像的宽度*/
    DWORD bHeight; /* 图像的高度*/
    WORD bPlanes; /* 图像的位面数*/
    WORD bBitCount; /* 每个像素的位数*/
    DWORD bCompression; /* 压缩类型*/
    DWORD bmpImageSize; /* 图像的大小,以字节为单位*/
    DWORD bXPelsPerMeter; /* 水平分辨率*/
    DWORD bYPelsPerMeter; /* 垂直分辨率*/
    DWORD bClrUsed; /* 使用的色彩数*/
    DWORD bClrImportant; /* 重要的颜色数*/
} BMPINF;

/*彩色表*/
typedef struct RGB_QUAD
{
    WORD rgbBlue; /* 蓝色强度*/
    WORD rgbGreen; /* 绿色强度*/
    WORD rgbRed; /* 红色强度*/
    WORD rgbReversed; /* 保留值*/
} RGBQUAD;


// ------------------界面设计-----------------------------------------

ZQD::ZQD(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZQD)
{
    ui->setupUi(this);

    QSpinBox *spinBox = new QSpinBox(this);
    ui->mainToolBar->addWidget(spinBox);


}

ZQD::~ZQD()
{
    delete ui;
}


// ----------------------生成24位BMP---------------------------------------

void ZQD::drawText(int font_size, QString str, int n)
{
QPainter p;
QSize size(150, 50); //指定图片大小;
QImage* image = new QImage(size, QImage::Format_ARGB32); //以ARGB32格式构造一个QImage,
image->fill(qRgba(255,255,255,0));
p.begin(image);
QPen pen = p.pen();
pen.setColor(Qt::black);
QFont font;
font.setFamily(("SimSun"));
font.setPixelSize(64);//改变字体大小

// QImage img("");
// img.pixelColor(0,0).value();

p.setPen(pen);
p.setFont(z_font);
p.setBackgroundMode(Qt::TransparentMode);//Qt::OpaqueMode , TransparentMode
p.setCompositionMode(QPainter::CompositionMode_DestinationOver);
p.drawText(image->rect(), Qt::AlignCenter, QObject::tr(str.toStdString().c_str())); //Qt::AlignLeft Qt::AlignRight

if(1 == n)
{
image->save("C:\\Users\\April\\Desktop\\QT_tmp\\1.bmp","BMP");
qDebug()<<"You are fucking genius!"<<endl;
}
else
{
image->save("2.bmp");
}

p.end();

}

//----------------------------------------------------------------------------------------

// -------------------------点击按钮，生成文件编辑窗口-----------------------------------------

void ZQD::on_actionNew_File_N_triggered()
{
    QTextEdit *edit = new QTextEdit(this);
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(edit);
    child->setWindowTitle(tr("Multiple Document Interface"));
    child->show();
}

void ZQD::on_actionShow_Dock_D_triggered()
{
    ui->dockWidget->show();
}


void ZQD::on_lineEdit_textChanged(const QString &arg1)
{
    showName = arg1;
}

// *****************************************************************

// *****************************************************************

// --点击按钮展示，完成： 选择本地24位bmp -》 根据rgb值进行字符填充，实现打印效果
void ZQD::on_pushButton_clicked()
{
    QTextEdit *edit = new QTextEdit(this);
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(edit);
    child->setWindowTitle(tr("Multiple Document Interface"));
    child->show();

    child->resize(1600,800);


    // **************************

    edit->setFont(z_font);

    FILE *fp;
        BMPFILEHEADER fileHeader;
        BMPINF infoHeader;
        long offset, bmpImageSize, width, height, bytesPerPixel, size, bitCount;

        WORD c;

        if((fp = fopen("C:\\Users\\April\\Desktop\\QT_tmp\\1.bmp", "rb")) == NULL)      //图片路径可修改
        {
            printf("Null File Error!\n");
            exit(0);
        }

        fread(&fileHeader, sizeof(fileHeader), 1, fp);
        fread(&infoHeader, sizeof(infoHeader), 1, fp);

        //计算并输出位图数据的偏移量，图像的大小，宽度和高度，每个像素点所占的字节
        size = fileHeader.bSize;
        offset = fileHeader.bOffset;
        bmpImageSize = infoHeader.bmpImageSize;
        width = infoHeader.bWidth;
        height = infoHeader.bHeight;
        bitCount = infoHeader.bBitCount;
        bytesPerPixel = infoHeader.bBitCount / 8;

        printf("SIZE: %d, WIDTH: %d, HEIGHT: %d \n", size, width, height);

        c = fgetc(fp);               //输出每个像素点所占字节中的内容

        while (!feof(fp))
        {
            c = fgetc(fp);
        }


        fseek(fp, offset, SEEK_SET);            //跳过图像信息头部分
        int fp_width=0;
        int i,j,ascii=22;               //选用的ascii码可修改

        int m=width*3%4;                //通过计算得到每行计算机需要填充的字符数
        if(m!=0)
        {
            fp_width=4-m;
        }
        int red[50][150];             //申请像素数组大小
        int green[50][150];
        int blue[50][150];
        int alpha[50][150];

        for(i=height-1;i>=0;i--)          //通过遍历给数组存值
        {
            for(j=0;j<width;j++)
            {
                red[i][j]=fgetc(fp);
                green[i][j]=fgetc(fp);
                blue[i][j]=fgetc(fp);
                alpha[i][j]=fgetc(fp);
            }
            fseek(fp,fp_width,1);   //跳过扫描时每行填充的字符，fp_width表示每行计算机需要填充的字符数

        }

        QString qname {};

        for( i=0;i<height;i++)
        {
            for( j=0;j<width;j++)
            {
                if(red[i][j]==0&&green[i][j]==0&&blue[i][j]==0)
                {
                    if(showName.isEmpty()){
                        qname += "#";
                    } else {
                        qname += showName;
                    }


                   // printf("%c",'*');
                }else if(red[i][j]==255&&green[i][j]==255&&blue[i][j]==255)
                {
                    qname += " ";
                   // printf(" ");
                    //加空格图片显示得更有比例，但可能CMD 显示不全
                }
            }
            qname += "\n";
            // printf("\n");
        }
            edit->setText(qname);

}

void ZQD::on_fontComboBox_currentTextChanged(const QString &arg1)
{

}

// ---------------按下按钮进入字体选择对话框---------------------------

void ZQD::on_pushButton_2_clicked()
{
    bool isOK;
    QFont font = QFontDialog::getFont(&isOK, this);
    if(isOK){
        ui->lineEdit->setFont(font);
        z_font = font;
        this->drawText(28,YourName,1);
    }else{
        qDebug()<<"You don't choose any font!"<<endl;

    }
}

// 输入要打印的字符
void ZQD::on_lineEdit_2_textChanged(const QString &arg1)
{
    YourName = arg1;
}


void ZQD::on_pushButton_3_clicked()
{
    bool isOK;
    QFont font = QFontDialog::getFont(&isOK, this);
    if(isOK){
        ui->lineEdit->setFont(font);
        z_font = font;
        this->drawText(28,YourName,1);
    }else{
        qDebug()<<"You don't choose any font!"<<endl;

    }
}

// open picture
void ZQD::on_openPictureBtn_clicked()
{
    QString filepath = QFileDialog::getOpenFileName(this,"Open file from local storage","./");
    sourceIMG = QImage(filepath);


    QLabel * qsourceIMGLabel = new QLabel();
    QMdiSubWindow *srcchild = ui->mdiArea->addSubWindow(qsourceIMGLabel);
    srcchild->setWindowTitle(tr("Source IMG"));
    srcchild->show();
    srcchild->resize(960,540);
    sourceIMG = sourceIMG.scaled(qsourceIMGLabel->width(), qsourceIMGLabel->height());
    qsourceIMGLabel->setPixmap(QPixmap::fromImage(sourceIMG));
}

void ZQD::on_pushButton_4_clicked()
{

    QImage qgrayIMG = sourceIMG;

    //qgrayIMG.Format_RGB888;
    for(int i=0;i<qgrayIMG.width();i++){
        for(int  j=0;j<qgrayIMG.height();j++){
            QRgb k = qgrayIMG.pixel(i,j);
            int red = qRed(k);
            int blue = qBlue(k);
            int green = qGreen(k);
            int grey = (red+blue+green)/3;
            qgrayIMG.setPixel(i,j,qRgb(grey,grey,grey));
        }
    }
    QLabel * qgrayIMGLabel = new QLabel();
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(qgrayIMGLabel);
    child->setWindowTitle(tr("Photo Productor"));
    child->show();
    child->resize(960,540);
    qgrayIMG = qgrayIMG.scaled(qgrayIMGLabel->width(), qgrayIMGLabel->height());
    qgrayIMGLabel->setPixmap(QPixmap::fromImage(qgrayIMG));
    saveImg = qgrayIMG;
}

void ZQD::on_meanFilteringBtn_clicked()
{
    QImage qmeanIMG = sourceIMG;
    for(int i=1;i<qmeanIMG.width()-1;i++){
        for(int  j=1;j<qmeanIMG.height()-1;j++){
            QRgb r1 = qmeanIMG.pixel(i-1,j-1);
            QRgb r2 = qmeanIMG.pixel(i,j-1);
            QRgb r3 = qmeanIMG.pixel(i+1,j-1);
            QRgb r4 = qmeanIMG.pixel(i-1,j);
            QRgb r5 = qmeanIMG.pixel(i,j);
            QRgb r6 = qmeanIMG.pixel(i+1,j);
            QRgb r7 = qmeanIMG.pixel(i-1,j+1);
            QRgb r8 = qmeanIMG.pixel(i,j+1);
            QRgb r9 = qmeanIMG.pixel(i+1,j+1);
            int aver = (qRed(r1)+qRed(r2)+qRed(r3)+qRed(r4)+qRed(r5)+qRed(r6)+qRed(r7)+qRed(r8)+qRed(r9))/9;
            qmeanIMG.setPixel(i,j,qRgb(aver,aver,aver));
        }
    }
    QLabel * qmeanFilter = new QLabel();
    QMdiSubWindow *meanchild = ui->mdiArea->addSubWindow(qmeanFilter);
    meanchild->setWindowTitle(tr("Mean Filtering IMG"));
    meanchild->show();
    meanchild->resize(960,540);
    qmeanIMG = qmeanIMG.scaled(qmeanFilter->width(), qmeanFilter->height());
    qmeanFilter->setPixmap(QPixmap::fromImage(qmeanIMG));
    saveImg = qmeanIMG;
}

void ZQD::on_pushButton_5_clicked()
{
    saveImg.save("C:\\Users\\April\\Desktop\\QT_tmp\\IMG.bmp","BMP");
}
