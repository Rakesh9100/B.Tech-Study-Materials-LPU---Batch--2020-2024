#include <iostream>
using namespace std;
class TheatreSeat
{
public:
int id;
string name;
};

int main()
{
TheatreSeat seat[10][10];
int r, c, i, j;
cout<<"Enter no of rows: ";
cin>>r;
cout<<"Enter no of columns: ";
cin>>c;

for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
cout<<"Enter the seat"<<i + 1<<j + 1<<" details(id, name):\n";
cin>>seat[i][j].id;
cin>>seat[i][j].name;
}
}

for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
cout<<"Seat"<<i + 1<<j + 1<<" details:\n";
cout<<"ID: "<<seat[i][j].id<<endl;
cout<<"Name: "<<seat[i][j].name<<endl;
}
}
return 0;
}


