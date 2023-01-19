#include <iostream>
using namespace std;

class ABC
{
int x;
public:
ABC(int a)
{
x = a;
cout<<"ABC constructor called & Value: "<<x<<endl;
}
};

class XYZ
{
ABC obj;
public:
XYZ(int b): obj(b)
{
cout<<"XYZ constructor called";
}
};

int main()
{
XYZ ob(25);
}
