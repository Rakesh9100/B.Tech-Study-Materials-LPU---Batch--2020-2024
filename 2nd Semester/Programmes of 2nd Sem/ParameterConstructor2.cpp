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

Cab(int fare)
{
this->fare = fare;
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
int calc = 0;
cout<<"Can fare be calculated? 0 for Yes 1 for No: ";
cin>>calc;
if(calc == 1)
{
Cab ola;
cout<<"Base Fare: "<<ola.getFare()<<endl;
ola.setFare(170);
cout<<"Final fare: "<<ola.getFare()<<endl;
}
else
{
Cab uber(150);
cout<<"Initial Fare: "<<uber.getFare()<<endl;
uber.setFare(200);
cout<<"Final fare: "<<uber.getFare()<<endl;

}


}
