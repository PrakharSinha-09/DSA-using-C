#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *top=NULL;                 //initially , nothing is inside the stack.

void LinkedListTraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",(*ptr).data);
        ptr=(*ptr).next;
    }
}

int isEmpty(struct node *top)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct node *top)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        return 1;
    }
    return 0;
}

struct node *push(struct node *top,int data)
{
    if(isFull(top))
    {
        printf("Stack iS Full");
    }
    else
    {
        struct node *new=(struct node *)malloc(sizeof(struct node));
        (*new).next=top;
        (*new).data=data;
        top=new;
        return top;
    }
}

int pop(struct node *tp)
{
    if(isEmpty(tp))
    {
        printf("Stack iS Empty!");
    }
    else
    {
        struct node *n=tp;
        top=(*tp).next;
        int val=(*n).data;
        free(n);
        return val;
    }
}

int main()
{
    top=push(top,32);
    top=push(top,31);
    top=push(top,30);
    int element=pop(top);
    printf("popped element : %d\n",element);
    LinkedListTraversal(top);

    return 0;
}