#include <iostream>
using namespace std;

int main()
{
	int a[100],n,i,j,temp,item;
	cout<<"Enter number of elements :";
	cin>>n;

	cout<<"Enter elements :";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=1;i<n;i++)
	{
		item=a[i];
		j=i-1;
		while(a[j]>item && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=item;
	}

	cout<<"Sorted Elements: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
