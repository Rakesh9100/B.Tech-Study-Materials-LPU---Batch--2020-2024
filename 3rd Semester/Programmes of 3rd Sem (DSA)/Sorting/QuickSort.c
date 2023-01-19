#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void quicksort(int a[], int start, int end)
{
	if(start < end)
	{
		int q = partition(a, start, end);
		quicksort(a, start, q-1);
		quicksort(a, q+1, end);
	}
}
int partition(int a[], int start, int end)
{
	int pivot=a[end];
	int pindex=start; 
	int i;
	for(i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			swap(&a[i],&a[pindex]);
			pindex++;
		}
	}
	swap(&a[pindex],&a[end]);
	return pindex;

}

main()
{
	int arr[10];
	int i;
	printf("Enter 10 elements : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	int n = 10;
	quicksort(arr, 0, n-1);
	printf("Sorted 10 elements : ");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}
