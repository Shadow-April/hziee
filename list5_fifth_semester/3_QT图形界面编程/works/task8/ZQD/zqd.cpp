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
#include <QStringList>
#include <QComboBox>
#include <QPaintEvent>


#include <stdio.h>
#include <stdlib.h>


#pragma pack(2)

// -------------------------------------------------------------------------------------
// 输入字符 -》 生成24位图 -> 打印
// -------------------------------------------------------------------------------------


QString showName = "&";       //填充字符
QString YourName = "邹桥东";   //如果没有输入，默认打印字符
QFont z_font;                 //生成图片中的字体
int brightnessCount = 0;
int flagI = 1;
int flagD = 1;

// ------------------------------------------------------------------------------------

QLabel *qsubTileIMGLabel;
QMdiSubWindow *qsubTileChild;

// ------------------------------------------------------------------------------------

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

    QStringList strList;
    strList<<"English"<<"中文";
    QComboBox *comboBox = new QComboBox(this);
    comboBox->addItems(strList);
    comboBox->setStyleSheet(QString());
    ui->mainToolBar->addWidget(comboBox);

    qsubTileIMGLabel = new QLabel();
    connect(comboBox,static_cast<void(QComboBox::*)(int)>(&QComboBox::currentIndexChanged),
            [=](int value){
        if(value == 1){
            tsr.load(":/trans/chinese.qm");

        }else{
            tsr.load(":/trans/english.qm");
        }
        ui->retranslateUi(this);
        this->update();
        qApp->installTranslator(&tsr);
    });
    // -------------------------------------------------------------------
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

    // 当前打开图片方式存在问题，打开第二次的时候将会崩溃
    QString filepath = QFileDialog::getOpenFileName(this,"Open file from local storage","./");
    sourceIMG = QImage(filepath);


    QLabel * qsourceIMGLabel = new QLabel();
    QMdiSubWindow *srcchild = ui->mdiArea->addSubWindow(qsourceIMGLabel);
    srcchild->setWindowTitle(tr("Source IMG"));
    srcchild->show();
    srcchild->resize(900,1040);

    // 打开图片的时候初始化右侧对比窗口
    qsubTileChild = ui->mdiArea->addSubWindow(qsubTileIMGLabel);
    qsubTileChild->setWindowTitle(tr("SubWindow for MIR"));
    qsubTileChild->show();
    qsubTileChild->resize(900,1040);

    sourceIMG = sourceIMG.scaled(960, 540);
    qsourceIMGLabel->setPixmap(QPixmap::fromImage(sourceIMG));
    qsubTileIMGLabel->setPixmap(QPixmap::fromImage(sourceIMG));


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
    // child->show();
    // child->resize(960,540);
    qgrayIMG = qgrayIMG.scaled(960, 540);
    qsubTileIMGLabel->setPixmap(QPixmap::fromImage(qgrayIMG));
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
    //meanchild->show();
    //meanchild->resize(960,540);
    qmeanIMG = qmeanIMG.scaled(960, 540);
    qsubTileIMGLabel->setPixmap(QPixmap::fromImage(qmeanIMG));
    saveImg = qmeanIMG;
}

void ZQD::on_pushButton_5_clicked()
{
    saveImg.save("C:\\Users\\April\\Desktop\\QT_tmp\\IMG.bmp","BMP");
}

QColor ZQD::checkColor(int r,int g,int b){
     return QColor(r>255?255:(r<0?0:r),g>255?255:(g<0?0:g),b>255?255:(b<0?0:b));
}

// Mean for RGB IMG
void ZQD::on_pushButton_6_clicked()
{
    QImage qmeanRIMG = sourceIMG;
    QColor oldColor;
    QColor newColor;

    int w = qmeanRIMG.width();
    int h = qmeanRIMG.height();

    for(int y = 0; y<qmeanRIMG.height(); y++){
        QRgb * line = (QRgb *)qmeanRIMG.scanLine(y);
        for(int x = 0; x<qmeanRIMG.width(); x++){
            if(y==0||y==h-1||x==0||x==w-1){
                newColor=qmeanRIMG.pixelColor(x,y);
            }else{
                int r=0,g=0,b=0;
                for(int l=-1;l<=1;l++){
                    for(int m=-1;m<=1;m++){
                        QColor temp=qmeanRIMG.pixelColor(x+l,y+m);
                        r+=temp.red();
                        g+=temp.green();
                        b+=temp.blue();
                    }
                    newColor = checkColor(r/9,g/9,b/9);
                }
            }
            qmeanRIMG.setPixelColor(x,y,newColor);
        }
    }

    QLabel * qmeanRFilter = new QLabel();
    QMdiSubWindow *meanchild = ui->mdiArea->addSubWindow(qmeanRFilter);
    meanchild->setWindowTitle(tr("Mean Filtering IMG"));
    //meanchild->show();
    //meanchild->resize(960,540);
    qmeanRIMG = qmeanRIMG.scaled(960, 540);
    qsubTileIMGLabel->setPixmap(QPixmap::fromImage(qmeanRIMG));
    saveImg = qmeanRIMG;
}

// brightnessIncBtn light up
void ZQD::on_brightnessIncBtn_clicked()
{
    brightnessCount += 10;

    QImage qbrightnessUIMG = setBrightness(sourceIMG,brightnessCount);

    QLabel * qbrightnessFilter = new QLabel();
    QMdiSubWindow *meanchild = ui->mdiArea->addSubWindow(qbrightnessFilter);
    meanchild->setWindowTitle(tr("Mean Filtering IMG"));
    //meanchild->show();
    //meanchild->resize(960,540);
    qbrightnessUIMG = qbrightnessUIMG.scaled(960, 540);
    qsubTileIMGLabel->setPixmap(QPixmap::fromImage(qbrightnessUIMG));
    saveImg = qbrightnessUIMG;
}

void ZQD::on_brightnessDecBtn_clicked()
{
    brightnessCount -= 10;
    QImage qbrightnessDIMG = setBrightness(sourceIMG,brightnessCount);

    QLabel * qbrightnessFilter = new QLabel();
    QMdiSubWindow *meanchild = ui->mdiArea->addSubWindow(qbrightnessFilter);
    meanchild->setWindowTitle(tr("Mean Filtering IMG"));
    //meanchild->show();
    //meanchild->resize(960,540);
    qbrightnessDIMG = qbrightnessDIMG.scaled(960, 540);
    qsubTileIMGLabel->setPixmap(QPixmap::fromImage(qbrightnessDIMG));
    saveImg = qbrightnessDIMG;
}

QImage ZQD::setBrightness(QImage Img,int iBrightValue){

        int red, green, blue;
        int pixels = Img.width() * Img.height();
        unsigned int *data = (unsigned int *)Img.bits();

        for (int i = 0; i < pixels; ++i)
        {
            red= qRed(data[i])+ iBrightValue;
            red = (red < 0x00) ? 0x00 : (red > 0xff) ? 0xff : red;
            green= qGreen(data[i]) + iBrightValue;
            green = (green < 0x00) ? 0x00 : (green > 0xff) ? 0xff : green;
            blue= qBlue(data[i]) + iBrightValue;
            blue =  (blue  < 0x00) ? 0x00 : (blue  > 0xff) ? 0xff : blue ;
            data[i] = qRgba(red, green, blue, qAlpha(data[i]));
        }

        return Img;

}

// ------------------------------------------Edge Check Start--------------------------------------------------------

/*梯度法边缘检测 比例scale对差分结果进行缩放*/
QImage ZQD:: SideGrandiant(QImage image)
{
    QImage newImage = sourceIMG;
    QColor color0;
    QColor color1;
    QColor color2;
    int  r = 0;
    int g = 0;
    int b = 0;
    int rgb = 0;
    int r1 = 0;
    int g1 = 0;
    int b1 = 0;
    int rgb1 = 0;
    int a = 0;
    for( int y = 0; y < image.height() - 1; y++)
    {
        for(int x = 0; x < image.width() - 1; x++)
        {
            color0 =   QColor ( image.pixel(x,y));
            color1 =   QColor ( image.pixel(x + 1,y));
            color2 =   QColor ( image.pixel(x,y + 1));
            r = abs(color0.red() - color1.red());
            g = abs(color0.green() - color1.green());
            b = abs(color0.blue() - color1.blue());
            rgb = r + g + b;

            r1 = abs(color0.red() - color2.red());
            g1= abs(color0.green() - color2.green());
            b1 = abs(color0.blue() - color2.blue());
            rgb1 = r1 + g1 + b1;

            a = rgb + rgb1;
            //a = a * scale;
            a = a>255?255:a;

            newImage.setPixel(x,y,qRgb(a,a,a));
        }
    }
    return newImage;
}

/*Roberts法边缘检测 比例scale对差分结果进行缩放*/
QImage ZQD:: SideRobertsdiant(QImage image,double scale)
{
    QImage newImage = sourceIMG;
    QColor color0;
    QColor color1;
    QColor color2;
    QColor color3;
    int  r = 0;
    int g = 0;
    int b = 0;
    int rgb = 0;
    int r1 = 0;
    int g1 = 0;
    int b1 = 0;
    int rgb1 = 0;
    int a = 0;
    for( int y = 0; y < image.height() - 1; y++)
    {
        for(int x = 0; x < image.width() - 1; x++)
        {
            color0 =   QColor ( image.pixel(x,y));
            color1 =   QColor ( image.pixel(x + 1,y));
            color2 =   QColor ( image.pixel(x,y + 1));
            color3 =   QColor ( image.pixel(x + 1,y + 1));
            r = abs(color0.red() - color3.red());
            g = abs(color0.green() - color3.green());
            b = abs(color0.blue() - color3.blue());
            rgb = r + g + b;

            r1 = abs(color1.red() - color2.red());
            g1= abs(color1.green() - color2.green());
            b1 = abs(color1.blue() - color2.blue());
            rgb1 = r1 + g1 + b1;

            a = rgb + rgb1;
            a = a * scale;
            a = a>255?255:a;

            newImage.setPixel(x,y,qRgb(a,a,a));
        }
    }
    return newImage;
}

/*sobel法边缘检测 比例scale对差分结果进行缩放,type表示使用那种公式 取值0或则1*/
QImage ZQD:: SideSobeldiant(QImage image,double scale,int type)
{
    type = 1;
    QImage newImage = sourceIMG;
    QColor color0;
    QColor color1;
    QColor color2;
    QColor color3;
    QColor color4;
    QColor color5;
    QColor color6;
    QColor color7;
    QColor color8;
    int  r = 0;
    int g = 0;
    int b = 0;
    int rgb = 0;
    int r1 = 0;
    int g1 = 0;
    int b1 = 0;
    int rgb1 = 0;
    int a = 0;
    for( int y = 1; y < image.height() - 1; y++)
    {
        for(int x = 1; x < image.width() - 1; x++)
        {
            color0 =   QColor ( image.pixel(x,y));

            color1=   QColor ( image.pixel(x-1,y-1));
            color2 =   QColor ( image.pixel(x,y-1));
            color3 =   QColor ( image.pixel(x+1,y));

            color4 =   QColor ( image.pixel(x-1,y));
            color5 =   QColor ( image.pixel(x+1,y));

            color6 =   QColor ( image.pixel(x-1,y+1));
            color7=   QColor ( image.pixel(x,y+1));
            color8 =   QColor ( image.pixel(x+1,y+1));
            r = abs(color1.red() + color2.red() * 2 + color3.red() - color6.red() - color7.red() * 2 - color8.red());
            g = abs(color1.green() + color2.green() * 2 + color3.green() - color6.green() - color7.green() * 2 - color8.green());
            b = abs(color1.blue() + color2.blue() * 2 + color3.blue() - color6.blue() - color7.blue() * 2 - color8.blue());
            rgb = r + g + b;

            r1 = abs(color1.red() + color4.red() * 2 + color6.red() - color3.red() - color5.red() * 2 - color8.red());
            g1= abs(color1.green() + color4.green() * 2 + color6.green() - color3.green() - color5.green() * 2 - color8.green());
            b1 = abs(color1.blue() + color4.blue() * 2 + color6.blue() - color3.blue() - color5.blue() * 2 - color8.blue());
            rgb1 = r1 + g1 + b1;
           if(type == 0)
           {
               if (rgb > rgb1)
                   a = rgb;
               else
                   a = rgb1;
           }
           else if(type == 1)
           {
            a = (rgb + rgb1)/2;
           }
            a = a * scale;
            a = a>255?255:a;

            newImage.setPixel(x,y,qRgb(a,a,a));
        }
    }
    return newImage;
}

// -------------------------------------------End Edge Check-------------------------------------------------------

void ZQD::on_edgeDetectionBtn_clicked()
{
    QImage qedgeDetectionIMG = SideGrandiant(sourceIMG);

    QLabel * qedgeIMGLabel = new QLabel();
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(qedgeIMGLabel);
    child->setWindowTitle(tr("Photo Edge Detection"));
    // child->show();
    // child->resize(960,540);
    qedgeDetectionIMG = qedgeDetectionIMG.scaled(960, 540);
    qsubTileIMGLabel->setPixmap(QPixmap::fromImage(qedgeDetectionIMG));
    saveImg = qedgeDetectionIMG;
}

void ZQD::on_compoundBtn_clicked()
{

    QImage* qcomplexIMG = complex(sourceIMG,saveImg,0.3,0.7);

    QLabel * qcomplexIMGLabel = new QLabel();
    QMdiSubWindow *child = ui->mdiArea->addSubWindow(qcomplexIMGLabel);
    child->setWindowTitle(tr("Photo Edge Detection"));
    qsubTileIMGLabel->setPixmap(QPixmap::fromImage(*qcomplexIMG));
    saveImg = *qcomplexIMG;



}

QImage* ZQD::complex(QImage originImg,QImage nowImage,double oWeight,double nWeight)
{
    QImage* newImage = new QImage(originImg.width(),originImg.height(),QImage::Format_ARGB32);

    QColor originColor;
    QColor nowColor;

    for(int x = 0;x<originImg.width() ;x++)
    {
        for(int y= 0;y<originImg.height() ;y++)
        {
            int oR = 0;
            int oG = 0;
            int oB = 0;

            int nR = 0;
            int nG = 0;
            int nB = 0;

            originColor = QColor(originImg.pixel(x,y));
            nowColor = QColor(nowImage.pixel(x,y));

            oR = originColor.red();
            oG = originColor.green();
            oB = originColor.blue();

            nR = nowColor.red();
            nG = nowColor.green();
            nB = nowColor.blue();

            oR = qBound(0,(int)(oR*oWeight+nR*nWeight),255);
            oG = qBound(0,(int)(oG*oWeight+nG*nWeight),255);
            oB = qBound(0,(int)(oB*oWeight+nB*nWeight),255);

            newImage->setPixel(x,y,qRgb(oR,oG,oB));

        }
    }
    return newImage;
}
