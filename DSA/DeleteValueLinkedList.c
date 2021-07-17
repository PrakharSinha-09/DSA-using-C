#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void LinkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", (*ptr).data);
        ptr = (*ptr).next;
    }
}
struct node *DeleteIndex(struct node *head,int value)
{
    int i=0;
    struct node *p = head;
    struct node *q=(*head).next;

    while((*q).next!=NULL && (*q).data!=value)
    {
        p=(*p).next;
        q=(*q).next;
    }
    if ((*q).data==value)
    {
        (*p).next=(*q).next;
        free(q);
    }
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    (*head).data = 4;
    (*head).next = second;

    (*second).data = 8;
    (*second).next = third;

    (*third).data = 9;
    (*third).next = NULL;

    LinkedListTraversal(head);
    head = DeleteIndex(head,9);
    printf("\n");
    LinkedListTraversal(head);
}