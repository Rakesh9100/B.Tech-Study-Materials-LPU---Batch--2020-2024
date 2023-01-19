#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10];
	int top=-1;
	int choice=1;
	int item,i;
	
	while(choice!=0)
	{
		printf("Press 1 to push \nPress 2 to pop \nPress 0 to exit : ");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			if(top==sizeof(a)-1)
			{
				printf("Overflow");
			}
			else
			{
				printf("Enter the element to push : ");
				scanf("%d",&item);
				top=top+1;
				a[top]=item;
			}
		}
		else if(choice==2)
		{
			if(top==-1)
			{
				printf("\n No element to delete !!");
			}
			else
				top=top-1;
		}
		
	}
	printf("Final array is : ");
	for(i=top;i>=0;i--)
	{
		printf(" %d",a[i]);
	}

}
