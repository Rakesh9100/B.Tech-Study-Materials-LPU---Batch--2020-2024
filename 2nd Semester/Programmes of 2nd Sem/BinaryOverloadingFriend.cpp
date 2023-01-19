#include <iostream>
using namespace std;

class Test
{
int x, y;
public:
Test()
{

}
Test(int a, int b)
{
x = a;
y = b;
}

friend Test operator +(Test &, Test &);

void show()
{
cout<<"Data: X = "<<x<<" Y = "<<y<<endl;
}
};

Test operator +(Test &ob1, Test &ob2)
{
Test t;
t.x = ob1.x + ob2.x;
t.y = ob1.y + ob2.y;
return t;
}

int main()
{
Test ob1(12, 24), ob2(10, 20), ob3;
ob3 = ob1 + ob2; //operator +(ob1, ob2)
ob3.show();

return 0;
}

