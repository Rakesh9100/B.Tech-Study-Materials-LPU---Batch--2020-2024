#include <iostream>
using namespace std;

int main()
{
	int a[100], n, i, j, temp;

	cout<<"Enter number of elements : ";
	cin>>n;

	cout<<"Please Enter "<<n<<" elements ";
	for(i=0;i<n;i++)
		cin>>a[i];

	for(j=0;j<n-1;j++)
	{
		for(i=0;i<=n-2-j;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	
	cout<<"Sorted Elements using bubble sort : ";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
