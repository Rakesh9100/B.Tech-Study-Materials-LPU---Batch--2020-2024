#include <iostream>
using namespace std;
class Test
{
int x;
public:

void setData(int a)
{
x = a;
}
int getData()
{
return x;
}
};

int main()
{
Test ob1;
ob1.setData(25);
cout<<"Data: "<<ob1.getData()<<endl;

Test ob2 = ob1;
cout<<"Data: "<<ob2.getData()<<endl;
}
