#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0)
{
return a + b + c;
}

int main()
{
cout<<sum(10, 20)<<endl;
cout<<sum(15, 22, 10)<<endl;
return 0;
}
