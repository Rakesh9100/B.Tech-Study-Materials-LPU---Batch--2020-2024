#include <iostream>
using namespace std;

class Cab
{
int fare;
public:
Cab()
{
fare = 40;
}
void setFare(int fare)
{
this->fare = fare;
}
int getFare()
{
return fare;
}
};

int main()
{
Cab ola;
cout<<"Base Fare: "<<ola.getFare()<<endl;
ola.setFare(120);
cout<<"Final fare: "<<ola.getFare()<<endl;
}


