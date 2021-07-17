#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if((*q).r==(*q).f)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if((*q).r==(*q).size-1)
    {
        return 1;
    }
    return 0;
}

void Enqueue(struct queue *q,int val)
{
    if(isFull(q))
    {
        printf("Queue is full");
    }
    else{
        (*q).r++;
        (*q).arr[(*q).r]=val;
        printf("Enqueued Element : %d\n", val);     
    }
}

int Dequeue(struct queue *q)
{
    int a=-1;
    if(isEmpty(q))
    {
        printf("Queue is Empty");
    }
    else
    {
        (*q).f++;
         a=(*q).arr[(*q).f];
    }
    return a;
}

int main()
{
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    (*q).size=4;
    (*q).f=(*q).r=-1;
    (*q).arr=(int *)malloc((*q).size*sizeof(int));
    Enqueue(q,23);
    Enqueue(q,3);
    Enqueue(q,13);
    Enqueue(q,33);
    Enqueue(q,43);
    printf("\n");

    printf("Dequeued Element : %d\n", Dequeue(q));
    printf("Dequeued Element : %d\n", Dequeue(q));
    printf("Dequeued Element : %d\n", Dequeue(q));

    return 0;
}