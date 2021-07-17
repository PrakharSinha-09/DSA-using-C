#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void LinkedListTraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",(*ptr).data);
        ptr=(*ptr).next;
    }
}
struct node *insertEnd(struct node *head,int data)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;

    while((*p).next!=NULL)
    {
        p=(*p).next;
    }
    (*p).next=ptr;
    (*ptr).data=data;
    (*ptr).next=NULL;
    return head;

}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));

    (*head).data=4;
    (*head).next=second;

    (*second).data=8;
    (*second).next=third;

    (*third).data=9;
    (*third).next=NULL;

    LinkedListTraversal(head);
    head=insertEnd(head,7);
    printf("\n");
    LinkedListTraversal(head);
}