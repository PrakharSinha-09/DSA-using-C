#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void LinkedlistTraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n" ,(*ptr).data);
        ptr=(*ptr).next;
    }
}

struct node *insertIndex(struct node *head,int data)
{
    int i=0;
    int index=1;
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    while(i!=index-1)
    {
        p=(*p).next;
        i++;
    }
    (*p).next=ptr;
    (*ptr).next=(*p).next;
    (*ptr).data=data;
    return head;
}
int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));

    (*head).data=3;
    (*head).next=second;

    (*second).data=4;
    (*second).next=third;

    (*third).data=5;
    (*third).next=NULL; 

    LinkedlistTraversal(head);
    head=insertIndex(head,28);
    LinkedlistTraversal(head);
}