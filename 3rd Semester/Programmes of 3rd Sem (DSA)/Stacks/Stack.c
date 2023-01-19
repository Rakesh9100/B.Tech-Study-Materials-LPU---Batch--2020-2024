#include<stdio.h>
#include<stdlib.h>

void push(int element,int a[],int max,int *top)
{
	if(*top==max-1)
	{
		printf("Overflow");
	}
	else
	{
		*top=*top+1;
		a[*top]=element;
	}
	
}
void pop(int a[],int max,int *top)
{
	if(*top==-1)
	{
		printf("Underflow");
	}
	else
	{
		*top=*top-1;
	}
}
main()
{
	int stack[10];
	int top=-1;
	int ch=1,data;
	
	while(ch!=0)
	{
		printf("Pess 1 to PUSH, 2 to POP and 0 to EXIT : ");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter the data to PUSH : ");
			scanf("%d",&data);
			push(data,stack,10,&top);
		}
		else if(ch==2)
		{
			pop(stack,10,&top);
		}
	}
	
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d",stack[i]);
	}
}
