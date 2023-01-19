#include <iostream>
using namespace std;
class Test
{
int x;
public:
Test(int x): x(x)
{
//this->x = x;
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
