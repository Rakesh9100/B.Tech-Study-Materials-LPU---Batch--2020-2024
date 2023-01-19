#include <iostream>
using namespace std;
class Test
{
int x;
public:
void setVal() //setter
{
x = 10;
}
int getVal() //getter
{
return x;
}
};

int main()
{
Test ob;
void (Test :: *fp)() = &Test :: setVal;
(ob.*fp)();
cout<<ob.getVal();
return 0;
}
