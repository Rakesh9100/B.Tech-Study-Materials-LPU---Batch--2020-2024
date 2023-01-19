#include <iostream>
using namespace std;
class Test
{
public:
int x;
Test()
{
cout<<"Constructor Called"<<endl;
}

~Test()
{
cout<<"Destructor Called"<<endl;
}
};


int main()
{
Test ob;
ob.x = 15;
cout<<"Data: "<<ob.x<<endl;
return 0;
}
