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
        printf("%d \n",(*ptr).data);
        ptr=(*ptr).next;
    }

    
}
struct node *insertAtFirst(struct node *head,int data)
{
    struct node *new=(struct node *)malloc(sizeof(struct node));
    (*new).next=head;
    (*new).data=data;
    head=new;
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
    
    printf("Linked List Before Insertion \n");
    LinkedListTraversal(head);
    head=insertAtFirst(head,30);

    printf("Linked List After Insertion \n");
    LinkedListTraversal(head);

    return 0;
}