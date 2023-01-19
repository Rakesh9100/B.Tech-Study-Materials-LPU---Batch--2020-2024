#include<stdio.h>
#include<stdlib.h>

struct myNode
{
	int data;
	struct myNode *next;
};

int main()
{
	int n,i;
	printf("How many nodes ? ");
	scanf("%d",&n);

	struct myNode *start,*newNode,*ptr;

	start=(struct node*)malloc(sizeof(struct myNode)); //allocating memory
	printf("Please provide data for node 1 : ");
	scanf("%d",&start->data);
	start->next=NULL;
	ptr=start;

	for(i=2;i<=n;i++)
	{
		newNode=(struct node*)malloc(sizeof(struct myNode));//allocating memory
		printf("Please provide data for node %d: ",i);
		scanf("%d",&newNode->data);
		newNode->next=NULL;
		ptr->next=newNode;
		ptr=ptr->next;
	}

	printf("Linked list is as : ");

	ptr=start;
	while(ptr!=NULL)
	{
	printf("%d ",ptr->data);
	ptr=ptr->next;
	}
}
