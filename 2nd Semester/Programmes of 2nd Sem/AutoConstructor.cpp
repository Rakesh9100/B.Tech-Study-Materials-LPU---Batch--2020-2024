#include <iostream>
using namespace std;

class Test
{
int x;
public:
/*Test()
{

}*/
void setData(int x)
{
this->x = x;
}
int getData()
{
return x;
}
};

int main()
{
Test ob; //implicitly invoking default constructor
ob.setData(25);
cout<<"Data: "<<ob.getData()<<endl;
}
