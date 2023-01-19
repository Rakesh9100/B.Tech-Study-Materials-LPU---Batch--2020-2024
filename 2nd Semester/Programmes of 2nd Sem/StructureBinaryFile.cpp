#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
int roll;
string name;
};
int main()
{
fstream fout;
int i;
fout.open("student.dat", ios::out | ios::binary);

if(!fout)
{
cout<<"Error occurred during opening file"<<endl;
return 1;
}

Student st[3];

for(i = 0; i < 3; i++)
{
cout<<"Enter Student"<<i + 1<<" details(roll no, name):\n";
cin>>st[i].roll;
cin>>st[i].name;
}

for(i = 0; i < 3; i++)
{
fout.write((char *)&st[i], sizeof(Student)); //write(const char *, int)
}
fout.close();

if(!fout.good())
{
cout<<"File got corrupted during writing"<<endl;
return 1;
}

fstream fin;
fin.open("student.dat", ios::in | ios::binary);
if(!fin)
{
cout<<"Error occurred during opening file"<<endl;
return 1;
}

Student outdata[3];
for(i = 0; i < 3; i++)
{
fin.read((char *)&outdata[i], sizeof(Student));
}
fin.close();
if(!fin.good())
{
cout<<"File got corrupted during reading"<<endl;
return 1;
}
for(i = 0; i < 3; i++)
{
cout<<"Student"<<i + 1<<" details:\n";
cout<<"Roll: "<<outdata[i].roll<<endl;
cout<<"Name: "<<outdata[i].name<<endl;
}
return 0;
}
