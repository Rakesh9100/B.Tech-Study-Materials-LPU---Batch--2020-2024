#include <iostream>
using namespace std;

class Point
{
int x, y;
public:
Point(){}
Point(int a, int b)
{
x = a;
y = b;
}

Point operator +(const Point &p) //Point p = p2;
{
Point temp;
temp.x = x + p.x; //temp.x = p1.x + p2.x
temp.y = y + p.y; //temp.y = p1.y + p2.y
return temp;
}

void show()
{
cout<<"X = "<<x<<" & Y = "<<y<<endl;
}
};

int main()
{
Point p1(3, 5), p2(2, 6), p3;
p3 = p1 + p2; //p3 = p1.operator +(p2)
cout<<"Result point: ";
p3.show();
return 0;
}


