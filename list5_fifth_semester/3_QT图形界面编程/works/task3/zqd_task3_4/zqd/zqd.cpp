#define TRUE true

#include "zqd.h"
#include "ui_zqd.h"

#include <QGroupBox>
#include <QVBoxLayout>

zqd::zqd(QWidget *parent,Qt::WindowFlags f) :
    QToolBox(parent,0),
    ui(new Ui::zqd)
{
    //ui->setupUi(this);

    setWindowTitle(tr("QQ ToolBox"));
    //***************Init My Friends*****************
        toolBtn1_1=new QToolButton;
        toolBtn1_1->setText(tr("beibei"));
        toolBtn1_1->setIcon(QPixmap(":/images/110512151485386.png"));
        toolBtn1_1->setIconSize(QPixmap(":/images/110512151485386.png").size());
            toolBtn1_1->setAutoRaise(TRUE);
        toolBtn1_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        toolBtn1_2=new QToolButton;
        toolBtn1_2->setText(tr("jingjing"));
        toolBtn1_2->setIcon(QPixmap(":/images/110512151485388.png"));
        toolBtn1_2->setIconSize(QPixmap(":/images/110512151485388.png").size());
        toolBtn1_2->setAutoRaise(TRUE);
        toolBtn1_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        toolBtn1_3=new QToolButton;
        toolBtn1_3->setText(tr("huanhuan"));
        toolBtn1_3->setIcon(QPixmap(":/images/110512151485387.png"));
        toolBtn1_3->setIconSize(QPixmap(":/images/110512151485387.png").size());
        toolBtn1_3->setAutoRaise(TRUE);
        toolBtn1_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        toolBtn1_4=new QToolButton;
        toolBtn1_4->setText(tr("yingying"));
        toolBtn1_4->setIcon(QPixmap(":/images/1105121514853810.png"));
        toolBtn1_4->setIconSize(QPixmap(":/images/1105121514853810.png").size());
        toolBtn1_4->setAutoRaise(TRUE);
        toolBtn1_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        toolBtn1_5=new QToolButton;
        toolBtn1_5->setText(tr("nini"));
        toolBtn1_5->setIcon(QPixmap(":/images/110512151485389.png"));
        toolBtn1_5->setIconSize(QPixmap(":/images/110512151485389.png").size());
        toolBtn1_5->setAutoRaise(TRUE);
        toolBtn1_5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    //***************添加我的好友*****************
        QGroupBox *groupBox1=new QGroupBox;
        QVBoxLayout *layout1=new QVBoxLayout(groupBox1);
        layout1->setMargin(10);
        layout1->setAlignment(Qt::AlignHCenter);
        layout1->addWidget(toolBtn1_1);
        layout1->addWidget(toolBtn1_2);
        layout1->addWidget(toolBtn1_3);
        layout1->addWidget(toolBtn1_4);
        layout1->addWidget(toolBtn1_5);
        layout1->addStretch();
    //***************Str*********************
        toolBtn2_1=new QToolButton;
        toolBtn2_1->setText(tr("xiaowang"));
        toolBtn2_1->setIcon(QPixmap(":/images/110512151485383.png"));
        toolBtn2_1->setIconSize(QPixmap(":/images/110512151485383.png").size());
        toolBtn2_1->setAutoRaise(TRUE);
        toolBtn2_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        toolBtn2_2=new QToolButton;
        toolBtn2_2->setText(tr("xiaozhang"));
        toolBtn2_2->setIcon(QPixmap(":/images/110512151485384.png"));
        toolBtn2_2->setIconSize(QPixmap(":/images/110512151485384.png").size());
        toolBtn2_2->setAutoRaise(TRUE);
        toolBtn2_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    //***************Strangers*****************
        QGroupBox *groupBox2=new QGroupBox;
        QVBoxLayout *layout2=new QVBoxLayout(groupBox2);
        layout2->setMargin(10);
        layout2->setAlignment(Qt::AlignHCenter);
        layout2->addWidget(toolBtn2_1);
        layout2->addWidget(toolBtn2_2);
        layout2->addStretch();
    //***************BlackList*********************
        toolBtn3_1=new QToolButton;
        toolBtn3_1->setText(tr("Uzi"));
        toolBtn3_1->setIcon(QPixmap(":/images/110512151485384.png"));
        toolBtn3_1->setIconSize(QPixmap(":/images/110512151485384.png").size());
        toolBtn3_1->setAutoRaise(TRUE);
        toolBtn3_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        toolBtn3_2=new QToolButton;
        toolBtn3_2->setText(tr("Ning"));
        toolBtn3_2->setIcon(QPixmap(":/images/110512151485384.png"));
        toolBtn3_2->setIconSize(QPixmap(":/images/110512151485384.png").size());
        toolBtn3_2->setAutoRaise(TRUE);
        toolBtn3_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    //***************Add Black List*****************
        QGroupBox *groupBox3=new QGroupBox;
        QVBoxLayout *layout3=new QVBoxLayout(groupBox3);
        layout3->setMargin(10);
        layout3->setAlignment(Qt::AlignHCenter);
        layout3->addWidget(toolBtn3_1);
        layout3->addWidget(toolBtn3_2);
        layout3->addStretch();
    //***************Add to main window*****************
        this->addItem((QWidget*)groupBox1,tr("Friends"));
        this->addItem((QWidget*)groupBox2,tr("Stranger"));
        this->addItem((QWidget*)groupBox3,tr("BlackList"));
}

zqd::~zqd()
{
    delete ui;
}
