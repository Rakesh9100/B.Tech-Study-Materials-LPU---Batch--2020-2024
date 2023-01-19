#include<iostream>
using namespace std;
class student
{
int rollno;
public:
void get_no(int);
void put_no();

};
void student::get_no(int a)
{
rollno=a;
}
void student::put_no()
{
cout<<"Roll number : "<<rollno<<endl;
}
class test:public student
{
float sub1;
float sub2;
public:
void get_marks(float ,float);
void put_marks();
};
void test::get_marks(float x,float y)
{
sub1=x;
sub2=y;
}
void test::put_marks()
{
cout<<"Marks in subject 1:"<<sub1<<endl;
cout<<"Marks in subject 2:"<<sub2<<endl;

}
int main()
{
test t;
t.get_no(27);
t.put_no();
t.get_marks(99.9, 89.7);
t.put_marks();
return 0;
}
