/*
x = 3
y = 2
z = x + y

"hello" + "coders"

class Test:
x, y

ob3 = ob1 + ob2

Ways of operator overloading:
Using Member Function/Method
Using Friend Function

Syntax of method to overload operator:

returntype operator operatorsymbol(arguments)
{

}

No of arguments:

Unary Operator Overloading:
Member Function -> No argument
Friend Function -> 1 argument

Binary Operator Overloading:
Member Function -> 1 argument
Friend Function -> 2 argument

ob3 = ob1 + ob2 // ob1.operator +(ob2)

operator +(Test  ob):
a = x + ob.x

ob++ //ob.operator ++()
*/

#include <iostream>
using namespace std;

class Test
{
int x;
public:
Test(): x(4){}
void operator ++()
{
++x;
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
++ob;
ob.show();

}
