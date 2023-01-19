#include<iostream>
using namespace std;

class Animal
{
public:
void animalsound()
{cout<<"The animal makes a sound \n";
}
};
class Dog:public Animal
{
public:
void animalsound()
{
cout<<"The Dog says: Bow Wow"<<endl;

}
};
class Cat: public Animal
{
public:
void animalsound()
{
cout<<"The Cat says: Meow Meow";
}
};
int main()
{
Dog d;
Cat c;
Animal a;
a.animalsound();
d.animalsound();
c.animalsound();
return 9;
}
