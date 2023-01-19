#include <iostream>
using namespace std;

int fun(int);
int main()
{
int (*fp)(int) = fun;
cout<<fp(10);
return 0;
}

int fun(int a)
{
return 2 * a;
}
