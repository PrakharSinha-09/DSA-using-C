#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *sp)
{
    if((*sp).top==-1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *sp)
{
    if((*sp).top==(*sp).size-1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *sp,int data)
{
    if(isFull(sp))
    {
        printf("Stack OverFlow!");
    }
    else
    {
        (*sp).top++;
        (*sp).arr[(*sp).top]=data;
        printf("Pushed Element : %d \n", data);
    }
}

int pop(struct stack *sp)
{
    if(isEmpty(sp))
    {
        printf("Stack iS Empty");
    }
    else
    {
        int a=(*sp).arr[(*sp).top];
        (*sp).top--;
        return a;
    }
}

int main()
{
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    (*s).size=5;
    (*s).top=-1;
    (*s).arr=(int *)malloc((*s).size*sizeof(int));
    push(s,23);
    push(s,25);
    push(s,26);
    push(s,22);
    push(s,34);
    push(s,32);
    printf("\n");

    printf("Popped Element : %d \n" ,pop(s));
    printf("Popped Element : %d \n" ,pop(s));
    printf("Popped Element : %d \n" ,pop(s));
    printf("Popped Element : %d \n" ,pop(s));
    printf("Popped Element : %d \n" ,pop(s));
   // printf("Popped Element : %d \n" ,pop(s));
   push(s,34);


}