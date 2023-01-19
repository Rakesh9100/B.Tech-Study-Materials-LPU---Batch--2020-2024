#include<stdio.h>
#include<stdlib.h>

mergeSort(int a[], int beg, int end)
{
	if(beg<end)
	{
		int mid=(beg+end)/2;
		mergeSort(a,beg,mid);
		mergeSort(a,mid+1,end);
		merge(a,beg,end,mid);
	}
}
void merge(int A[],int beg,int end,int mid)
{
	int n1=mid-beg+1;
	int n2=end-(mid+1)+1;

	int i;int j;int k;

	int Left[n1],Right[n2];
	for(i=0;i<n1;i++)//copy data to subarrays
		Left[i]=A[beg+i];
	for(j=0;j<n2;j++)
		Right[j]=A[mid+1+j];

	//merge the arrays
	i=0;
	j=0;
	k=beg;

	while(i<n1 && j<n2)
	{
		if(Left[i]<=Right[j])
		{
			A[k]=Left[i];
			i++;
		}
		else
		{
			A[k]=Right[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		A[k]=Left[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		A[k]=Right[j];
		j++;
		k++;
	}
}

main()
{
    int i;
    int arr[10];
    printf("Enter 10 elements : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr, 0, 9);
    printf("Sorted 10 elements : ");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}
