#include<iostream>

using namespace std;

class Test
{
int testcode, nocand, nocen;
char desc[30];

void calcntr()
{
nocen = nocand /100 + 1;
}

public:
void schedule()
{
cout<<"Enter testcode, description, no of candidates: "<<endl;
cin>>testcode;
cin.sync();
cin.getline(desc, 30);
cin>>nocand;

calcntr();
}
void disptest()
{
cout<<"Test Detials: "<<endl;
cout<<"Test code: "<<testcode<<endl;
cout<<"Description: "<<desc<<endl;
cout<<"No of candidates: "<<nocand<<endl;
cout<<"No of centers: "<<nocen<<endl;
}
};

int main()
{
Test ob;
ob.schedule();
ob.disptest();

return 0;
}
