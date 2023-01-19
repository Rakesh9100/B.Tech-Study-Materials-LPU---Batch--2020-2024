#include <iostream>
using namespace std;

class Test
{
int x;
public:
Test(): x(7){}

Test operator ++(int)
{
Test temp;
temp.x = x++;
return temp;
}

void show()
{
cout<<"Value: "<<x<<endl;
}
};

int main()
{
Test ob;
ob.show();
Test ob1 = ob++;
ob1.show();
return 0;
}


