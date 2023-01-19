#include <iostream>
using namespace std;

int main()
{
	int a[100],n,i,j,temp,minIndex,min;
	cout<<"Enter number of elements : ";
	cin>>n;

	cout<<"Enter elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0;i<n-1;i++)
	{
		min=a[i];
		minIndex=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				minIndex=j;
			}
		}
		temp=a[i];
		a[i]=a[minIndex];
		a[minIndex]=temp;
	}
	cout<<"Sorted Elements : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
