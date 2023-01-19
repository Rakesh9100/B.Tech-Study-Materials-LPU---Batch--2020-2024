#include <iostream>
using namespace std;

class Test
{
int &x;
public:
Test(int &a): x(a)
{
//x = a;
}
int getX()
{
return x;
}
};


int main()
{
int y = 25;
Test ob(y);
cout<<"Data: "<<ob.getX()<<endl;
}
