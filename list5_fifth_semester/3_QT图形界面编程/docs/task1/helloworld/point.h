#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class point
{
private:
// 数据成员

public:
// 公有函数
    double x;			// x坐标
    double y;			// y坐标
    Point(double a = 0, double b = 0)// 构造函数
    {x = a; y = b;}
    void Set(double a, double b)	// 设置坐标
    { x = a; y = b; }
    void Show()			// 显示坐标
    { cout << "(" << x << "," << y << ")" << endl; }   //可用qDebug()代替cout
};

#endif // POINT_H
