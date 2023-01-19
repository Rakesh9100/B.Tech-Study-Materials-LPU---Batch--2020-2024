#include <iostream>
using namespace std;
class Student
{
public:
int roll;
float mark;
};

int main()
{
Student s[30];
int n;
cout<<"Enter the no of students:" ;
cin>>n;

for(int i = 0; i < n; i++)
{
cout<<"Enter student "<<i + 1<<" details(roll, mark):\n";
cin>>s[i].roll;
cin>>s[i].mark;
}
for(int i = 0; i < n; i++)
{
cout<<"Student "<<i + 1<<" details:"<<endl;
cout<<"Roll: "<<s[i].roll<<endl;
cout<<"Mark: "<<s[i].mark<<endl;
}
return 0;
}

