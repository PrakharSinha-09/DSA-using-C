#include<stdio.h>
#include<stdlib.h>

struct node{
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

int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *fourth=(struct node *)malloc(sizeof(struct node));

    (*head).data=4;
    (*head).next=second;

    (*second).data=6;
    (*second).next=third;

    (*third).data=2;
    (*third).next=fourth;

    (*fourth).data=7;
    (*fourth).next=NULL;

    LinkedListTraversal(head);
}