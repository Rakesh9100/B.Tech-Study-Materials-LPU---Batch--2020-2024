#include <iostream>
using namespace std;

class Vehicle
{
public:
string brand="Ford";
void honk()
{
cout<<"Tuut, Tuut!!"<<endl;
}
};
class Car:public Vehicle
{
public:
string model="Ecosport";
};
int main()
{
Car c;
c.honk();
cout<<c.brand+ " "+c.model;
return 0;
}
