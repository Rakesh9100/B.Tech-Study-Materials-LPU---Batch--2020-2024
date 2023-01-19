#include<iostream>
using namespace std;
class Grandfather
{
public:
void f1()
{
cout<<"I am the grandfather and I have many gifts for you"<<endl;

}
};
class Father: public Grandfather
{
public:
void f2()
{
cout<<"I am the father and you please give all the gifts to your grandchild"<<endl;
}
};
class Grandchild: public Father
{
public:
void f3()
{
cout<<"I am super happy to get all the gifts from grandfather";
}
};
int main()
{
Grandchild g;
g.f1();
g.f2();
g.f3();
return 7;
}
