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

    struct myNode *start,*newNode,*ptr,*ptrp;

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


    printf("Please enter data part of the node to be deleted : ");
    int d;
    scanf("%d",&d);

    ptr=start;
    ptrp=start;
    while(ptr!=NULL)
    {
        if(ptr->data==d)
        {
        break;
        }
    ptrp=ptr;
    ptr=ptr->next;
    }
    if(ptr==NULL)//not found
    {
        printf("Element not present in the linked list. ");
    }
    else if(ptr==start)//element found at beginning
    {
        start=start->next;
    }
    else if(ptr->next==NULL)//element found at last
    {
        ptrp->next=NULL;
    }
    else//element found somewhere at middle
    {
        ptrp->next=ptr->next;
    }

    printf("The new linked list is : ");
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
