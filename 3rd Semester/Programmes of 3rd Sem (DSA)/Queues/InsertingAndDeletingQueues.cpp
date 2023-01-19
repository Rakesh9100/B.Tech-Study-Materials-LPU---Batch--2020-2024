#include <iostream>
using namespace std;

int main()
{
	int queue[10];
	int front=-1; int rear=-1;
	int n=sizeof(queue)/sizeof(int);
	int i;
	int ch=47;
	int item;
	
	while(ch!=0)
	{
		cout<<"Press 1 to ENQUEUE and 2 to DEQUEUE (0 to EXIT) : ";
		cin>>ch;
		if(ch==1)
		{
			cout<<"Enter item to be enqueued : ";
			cin>>item;
			if((front==0 && rear==n-1)||(front==rear+1))
			{
				cout<<"Queue is full";
			}
			else if(front==-1)
			{
				front=0;
				rear=0;
				queue[rear]=item;
			}
			else if(rear==n-1)
			{
				rear=0;
				queue[rear]=item;
			}
			else
			{
				rear=rear+1;
				queue[rear]=item;
			}
		}
		else if(ch==2)
		{
			if(front==-1)
			{
				cout<<"Queue is empty";
			}
			else if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else if(front==n-1)
			{
				front=0;
			}
			else
			{
				front=front+1;
			}
		}
	}
	cout<<"The final queue after operations is : ";
	if(front==-1)
	{
		cout<<"empty";
	}
	else if(front<=rear)
	{
		for(i=front;i<=rear;i++)
			cout<<queue[i]<<" ";
	}
	else if(front>rear)
	{
		for(i=front;i<=n-1;i++)
			cout<<queue[i]<<" ";
		for(i=0;i<=rear;i++)
			cout<<queue[i]<<" ";
	}	
}
