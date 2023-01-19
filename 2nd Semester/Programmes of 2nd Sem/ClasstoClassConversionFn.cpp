#include <iostream>
using namespace std;

class Time
{
int hrs, mins;
public:
Time(int h, int m)
{
hrs = h;
mins = m;
}
int getTime()
{
return hrs * 60 + mins;
}

void showTime()
{
cout<<"Duration: "<<hrs<<" hours & "<<mins<<" minutes."<<endl;
}
};

class Duration
{
int duration;
public:

void operator =(Time &t)
{
//duration = convert total time(hh : mins) into minutes
duration = t.getTime();
}
void showDurationMinutes()
{
cout<<"Duration in minutes: "<<duration<<" minutes."<<endl;
}
};

int main()
{
Time t(2, 25);
Duration d;
t.showTime();
d = t; //d.operator =(t)
d.showDurationMinutes();
return 0;
}
