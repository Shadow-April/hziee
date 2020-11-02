#include "zqd.h"
#include <QGridLayout> 
#include <assert.h>
#include <stack>
#include <QMenuBar>

#include "ui_zqd.h"

const QMap<QString, int> ZQD::Operators =
{

    { "*", 2 }, { "/", 2 },
	{ "+", 3 }, { "-", 3 },
	{ "(", 9 }
};

ZQD::ZQD(QWidget *parent)
	: QMainWindow(parent),
	m_inputing("0"),
	m_bEmptyInput(true),
	m_result("0")
{
	m_ui.setupUi(this);
    connect(m_ui.pushButton_clear, &QPushButton::clicked, this, &ZQD::onButtonClearClick);
    connect(m_ui.pushButton_ce, &QPushButton::clicked, this, &ZQD::onButtonClearClick);
    connect(m_ui.pushButton_backspace, &QPushButton::clicked, this, &ZQD::onButtonBackSpaceClick);
    connect(m_ui.pushButton_equal, &QPushButton::clicked, this, &ZQD::onButtonEqualClick);

    connect(m_ui.pushButton_0, &QPushButton::clicked, this, &ZQD::onButtonNumberClick);
    connect(m_ui.pushButton_1, &QPushButton::clicked, this, &ZQD::onButtonNumberClick);
    connect(m_ui.pushButton_2, &QPushButton::clicked, this, &ZQD::onButtonNumberClick);
    connect(m_ui.pushButton_3, &QPushButton::clicked, this, &ZQD::onButtonNumberClick);
    connect(m_ui.pushButton_4, &QPushButton::clicked, this, &ZQD::onButtonNumberClick);
    connect(m_ui.pushButton_5, &QPushButton::clicked, this, &ZQD::onButtonNumberClick);
    connect(m_ui.pushButton_6, &QPushButton::clicked, this, &ZQD::onButtonNumberClick);
    connect(m_ui.pushButton_7, &QPushButton::clicked, this, &ZQD::onButtonNumberClick);
    connect(m_ui.pushButton_8, &QPushButton::clicked, this, &ZQD::onButtonNumberClick);
    connect(m_ui.pushButton_9, &QPushButton::clicked, this, &ZQD::onButtonNumberClick);
    connect(m_ui.pushButton_point, &QPushButton::clicked, this, &ZQD::onButtonNumberClick);

    connect(m_ui.pushButton_add, &QPushButton::clicked, this, &ZQD::onButtonOperClick);
    connect(m_ui.pushButton_minus, &QPushButton::clicked, this, &ZQD::onButtonOperClick);
    connect(m_ui.pushButton_multiply, &QPushButton::clicked, this, &ZQD::onButtonOperClick);
    connect(m_ui.pushButton_divide, &QPushButton::clicked, this, &ZQD::onButtonOperClick);
    connect(m_ui.pushButton_1_div_x, &QPushButton::clicked, this, &ZQD::onButtonOperClick);
    connect(m_ui.pushButton_x_pow, &QPushButton::clicked, this, &ZQD::onButtonOperClick);
    connect(m_ui.pushButton_sqrt_x, &QPushButton::clicked, this, &ZQD::onButtonOperClick);
    connect(m_ui.pushButton_mod, &QPushButton::clicked, this, &ZQD::onButtonOperClick);
    connect(m_ui.pushButton_reverse, &QPushButton::clicked, this, &ZQD::onButtonOperClick);


    //添加菜单栏
    QMenuBar *menuBar;
    menuBar = new QMenuBar(this);
    this->setMenuBar(menuBar);

    //给菜单栏添加标准文件菜单
    QMenu *menuFile;
    menuFile = new QMenu(menuBar);
    menuBar->addAction(menuFile->menuAction());
    //设置文本和快捷键, 通常导航栏中&F指Alt+F, 菜单中&O指Ctrl+O
    menuFile->setTitle(tr("File(&F)"));

    //给文件菜单添加子菜单
    QAction *actionOpen;
    actionOpen = new QAction(this);
    actionOpen->setStatusTip(tr("Open an existing file"));      //设置状态栏提示, 鼠标悬浮时状态栏会提示对应信息
//    connect(actionOpen, &QAction::triggered, this, &MainWindow::open);      //关联槽函数

    QAction *actionSave;
    actionSave = new QAction(this);
    menuFile->addAction(actionOpen);
    menuFile->addSeparator();//给菜单加分隔条
    menuFile->addAction(actionSave);

    //给Open和Save菜单设置文本和快捷键
    actionOpen->setText(tr("Open(&O)"));
    actionSave->setText(tr("Save(&S)"));
}



void ZQD::onButtonClearClick()
{
	m_result = "0";
	m_inputStrings.clear();
	resetInputing();
	m_ui.lineEdit_1->setText("");
	m_ui.lineEdit_2->setText("0");
}

void ZQD::onButtonBackSpaceClick()
{
    if (m_bEmptyInput)
		return;
	if (m_inputing.size() == 1)
	{
		resetInputing();
		m_ui.lineEdit_2->setText("0");
		return;
	}
	m_inputing.remove(m_inputing.size() - 1, 1);
	m_ui.lineEdit_2->setText(m_inputing);
}

void ZQD::onButtonEqualClick()
{
	m_ui.lineEdit_1->setText("");
	if (m_result.isEmpty())
	{
		m_inputStrings.push_back(m_inputing);
		m_result = calculate();
		m_inputStrings.clear();
		resetInputing();
	}
	m_ui.lineEdit_2->setText(m_result);
}


void ZQD::onButtonNumberClick()
{
	QPushButton* button = dynamic_cast<QPushButton*>(sender());
	QString inputNumber = button->text();

	if (!m_result.isEmpty())
		m_result = "";

	if (inputNumber == ".")
	{
        if (m_inputing.contains('.'))
			return;
		if (m_bEmptyInput)
		{
            m_inputing = "0.";
			m_bEmptyInput = false;
		}
		else
		{
			m_inputing += inputNumber;
		}
		m_ui.lineEdit_2->setText(m_inputing);
		return;
	}

    if (m_bEmptyInput || m_inputing == "0")
	{
		m_inputing = inputNumber;
		m_bEmptyInput = false;
	}
	else
	{
		m_inputing += inputNumber;
	}
	m_ui.lineEdit_2->setText(m_inputing);
}

void ZQD::onButtonOperClick()
{
	QPushButton* button = dynamic_cast<QPushButton*>(sender());
	QString inputChar = button->text();

    if (!m_result.isEmpty())
	{
		m_inputing = m_result;
		onFirstOper(inputChar);
	}
    else if (m_bEmptyInput && isOper(m_inputStrings.back()))
	{
		onSecondOper(inputChar);
	}
	else
	{
		onFirstOper(inputChar);
	}
}

QString ZQD::calculate()
{
	std::vector<QString> suffix = Suffix(m_inputStrings);
	Node * root = SuffixTree(suffix);
	if (root)
	{
		double result = root->cal();
		delete root;
		return QString::number(result,'g',14);
	}
	else
		return QString("0");
}

void ZQD::onFirstOper(const QString & oper)
{
	m_inputStrings.push_back(m_inputing);//num
	m_ui.lineEdit_1->setText(m_ui.lineEdit_1->text() + m_inputing + oper);
	if (m_result.isEmpty())
	{
		m_result = calculate();
		m_ui.lineEdit_2->setText(m_result);
	}
	m_inputStrings.push_back(oper);//oper

	resetInputing();
	m_result = "";
}

void ZQD::onSecondOper(const QString & oper)//1 + - change to 1 -
{
	QString input = m_ui.lineEdit_1->text();
	input.remove(input.size() - 1, 1);
	m_ui.lineEdit_1->setText(input + oper);

	m_inputStrings.pop_back();
	m_inputStrings.push_back(oper);
}

std::vector<QString> ZQD::Suffix(const std::vector<QString>& strs)//3.0 + 4.0 * 2.0  ==>   3.0 4.0 2.0 * +
{
	std::stack<QString> operations;
	std::vector<QString> ret;
	if (strs.empty())
	{
		//?
	}

	int m = strs.size();
	for (int i = 0; i < m; i++)
	{
		if (strs[i].isEmpty()) {}

		if (strs[i][0] >= '0' && strs[i][0] <= '9')
		{
			ret.push_back(strs[i]);
		}
		else
		{
			if (operations.empty() || strs[i] == "(")
			{
				operations.push(strs[i]);
			}
			else if (strs[i] == ")")
			{
				while (operations.top() != "(")
				{
					ret.push_back(operations.top());
					operations.pop();
				}
				operations.pop();
			}
			else
			{
				while (!operations.empty() && Operators[strs[i]] >= Operators[operations.top()])
				{
					ret.push_back(operations.top());
					operations.pop();
				}
				operations.push(strs[i]);
			}
		}
	}
	while (!operations.empty())
	{
		ret.push_back(operations.top());
		operations.pop();
	}
	return ret;
}

Node* ZQD::SuffixTree(const std::vector<QString>& strs)
{
	if (strs.empty())
	{
		return NULL;
	}
	int m = strs.size();
	std::stack<Node*> nums;
	for (int i = 0; i < m; i++)
	{
		bool isNumber = !isOper(strs[i]);
		if (isNumber)
		{
			Node* temp = new NumNode(strs[i].toDouble());
			nums.push(temp);
		}
		else
		{
			Node *right = nums.top();
			nums.pop();
			Node *left = nums.top();
			nums.pop();
			char c = strs[i][0].toLatin1();
			switch (c)
			{
			case '+':
				nums.push(new AddNode(left, right));
				break;
			case '-':
				nums.push(new SubNode(left, right));
				break;
            case '*':
				nums.push(new MutiNode(left, right));
				break;
            case '/':
				nums.push(new DivNode(left, right));
				break;
			default:
				assert(false);
				break;
			}
		}
	}
	return nums.top();
}
