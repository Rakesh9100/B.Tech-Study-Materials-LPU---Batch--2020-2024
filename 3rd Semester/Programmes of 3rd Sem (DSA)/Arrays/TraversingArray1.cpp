#include <iostream>
using namespace std;

int main()
{
	int a[100], n=101, i;
	
	while(n>100)
	{
		cout<<"How many elements you want to enter(between 1 to 100) : ";
		cin>>n;
	}
	
	cout<<"Enter the elements now : ";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	cout<<"The elements you entered are : ";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
