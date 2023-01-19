#include <iostream>
using namespace std;

int main()
{
	int a[100], i, item, position, n,loc=-1;

	cout<<"How many elements do you want to enter (less than 100) ? ";
	cin>>n;

	cout<<"Please enter "<<n<<" elements ";
	for(i=0;i<n;i++)
		cin>>a[i];

	cout<<"Enter element to be searched ? ";
	cin>>item;

	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{		
			cout<<"\nElement is found!! ";
			loc=i;
			break;
		}
	}	
	if(loc==-1)
	cout<<"\nElement is not found!! ";
}
