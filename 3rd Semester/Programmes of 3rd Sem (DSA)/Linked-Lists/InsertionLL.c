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

    struct myNode *start,*newNode,*ptr,*item;

    start=(struct node*)malloc(sizeof(struct myNode));//allocating memory
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

    int d;
    printf("After which node do you want to insert new node ? ");
    scanf("%d",&d);

    item=(struct myNode*)malloc(sizeof(struct myNode));
    printf("Enter data part of new node : ");
    scanf("%d",&item->data);

    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->data==d)
        {
            break;
        }
        ptr=ptr->next;
    }

    if(ptr==NULL)
    {
        printf("%d is not in linked list.",d);
    }
    else if(ptr->next==NULL)
    {
        item->next=NULL;
        ptr->next=item;
    }
    else
    {
        item->next=ptr->next;
        ptr->next=item;
    }

    printf("New linked list is : ");
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
