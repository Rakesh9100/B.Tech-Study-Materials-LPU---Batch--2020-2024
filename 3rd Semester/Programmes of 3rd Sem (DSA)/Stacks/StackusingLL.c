#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int data;
	struct stack *next;
};
main()
{
	struct stack *top,*item,*ptr;
	int ch=1;

	while(ch!=0)
	{
		printf("Press 1 to PUSH, 2 to POP and 0 to exit : ");
		scanf("%d",&ch);

		if(ch==1)
		{
			printf("Enter data to insert : ");
			if(top==NULL)
			{
				top=(struct stack*)malloc(sizeof(struct stack));
				scanf("%d",&top->data);
				top->next=NULL;
			}
			else
			{
				item=(struct stack*)malloc(sizeof(struct stack));
				scanf("%d",&item->data);
				item->next=top;
				top=item;
			}

		}
		else if(ch==2)
		{

			if(top==NULL)
				printf("Underflow");
			else
				top=top->next;

		}		

	}
	ptr=top;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
