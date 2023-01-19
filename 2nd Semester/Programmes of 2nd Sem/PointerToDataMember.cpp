#include <iostream>
using namespace std;
class Test
{
public:
	int x;
	int *p = &x;
};
int main()
{
Test ob;
ob.x = 10;
cout<<ob.x<<endl;

*(ob.p) = 20;
cout<<ob.x;
}


