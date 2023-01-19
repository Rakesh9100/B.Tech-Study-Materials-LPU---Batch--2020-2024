#include <iostream>
using namespace std;
class Test
{
const int x;
public:
Test(int a): x(a)
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
Test ob(25);
cout<<"Data: "<<ob.getX()<<endl;
}
