#include<stdio.h>
#include<stdlib.h>

struct myNode
{
    struct myNode *prev;
    int data;
    struct myNode *next;
};

int main()
{
    int n,i;
    printf("How many nodes ? ");
    scanf("%d",&n);

    struct myNode *start,*newNode,*ptr,*item,*end;

    start=(struct node*)malloc(sizeof(struct myNode));//allocating memory
    printf("Please provide data for node 1 : ");
    scanf("%d",&start->data);
    start->next=NULL;
    start->prev=NULL;
    ptr=start;

    for(i=2;i<=n;i++)
    {
        newNode=(struct node*)malloc(sizeof(struct myNode));//allocating memory
        printf("Please provide data for node %d: ",i);
        scanf("%d",&newNode->data);
        newNode->prev=NULL;
        newNode->next=NULL;
        ptr->next=newNode;
        newNode->prev=ptr;
        ptr=ptr->next;
    }

    item=(struct node*)malloc(sizeof(struct myNode));
    printf("Enter data of new node : ");//insertion after given node.
    scanf("%d",&item->data);
    item->prev=NULL;
    item->next=NULL;

    int d;
    printf("After which node(enter data part) ? ");
    scanf("%d",&d);

    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->data==d)
        break;
        ptr=ptr->next;
    }


    if(ptr==NULL)
    {
        printf("%d not found in list !! ",d);
    }
    else if(ptr->next==NULL)
    {
        item->next=NULL;
        item->prev=ptr;
        ptr->next=item;
    }
    else
    {
        item->next=ptr->next;
        item->prev=ptr;
        (ptr->next)->prev=item;
        ptr->next=item;
    }
    printf("The new linked list is : ");
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
