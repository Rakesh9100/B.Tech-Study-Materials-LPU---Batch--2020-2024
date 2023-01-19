#include <iostream>
using namespace std;
class Test
{
public:
int x;
};

int main()
{
Test ob;
Test *p = &ob;

ob.x = 10;
cout<<ob.x<<endl;

p->x = 20;
cout<<ob.x;
}
