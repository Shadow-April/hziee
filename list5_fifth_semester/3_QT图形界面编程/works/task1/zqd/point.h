#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point
{
private:

public:
    double x;
    double y;
    Point(double a = 0, double b = 0){
        x = a;
        y = b;
    }
    void Set(double a, double b)
    {
        x = a;
        y = b;
    }
    void Show()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }

};

#endif // POINT_H
