#include <iostream>
using namespace std;
class Test
{
int roll;
int marks[3];
public:
void setData(int roll, int marks[])
{
this->roll = roll;
for(int i = 0; i < 3; i++)
this->marks[i] = marks[i];
}

void getData()
{
cout<<"Roll: "<<roll<<endl;
cout<<"Marks: ";
for(int i = 0; i < 3; i++)
cout<<marks[i]<<" ";
cout<<endl;
}
};

int main()
{
Test ob;
int roll, marks[3];
cout<<"Enter the roll number: ";
cin>>roll;
cout<<"Enter the 3 marks: ";
for(int i = 0; i < 3; i++)
cin>>marks[i];
ob.setData(roll, marks);
ob.getData();
}
