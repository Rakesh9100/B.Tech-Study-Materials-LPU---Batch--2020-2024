 #include<iostream>
using namespace std;
class Father
{
public:
void f1()
{
cout<<"I want to be a Super dad"<<endl;
}
};
class Mother
{
public:
void f2()
{
cout<<"I am already a super mom"<<endl;
}
};
class Child: public Father,public Mother
{
public:
void f3()
{
cout<<"I love eqaully to both of you parents so daddy take it easy!!";
}
};
int main()
{
Child c;
c.f1();
c.f2();
c.f3();
return 27;

}


