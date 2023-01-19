#include<iostream>
using namespace std;
class Employee
{
protected:
int salary;
};
class programmer: public Employee
{
public :
int bonus;
void setSalary(int s)
{
salary=s;
}
int getSalary()
{
return salary;
}
};
int main()
{
programmer p;
p.setSalary(70000);
p.bonus=15000;
cout<<"Salary:"<<p.getSalary()<<endl;
cout<<"Bonus :"<<p.bonus;
return 0;
}
