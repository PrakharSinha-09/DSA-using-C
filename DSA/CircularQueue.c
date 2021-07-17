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
    if((*q).f==((*q).r+1)%(*q).size)             //Comit This if Condition :-)
    {
        return 1;
    }
    return 0;
}

void Enqueue(struct queue *q,int val)
{
    if(isFull(q))
    {
        printf("Queue iS Full");
    }
    else{
        (*q).r=((*q).r+1)%(*q).size;
        (*q).arr[(*q).r]=val;
        printf("Enqued Element :%d \n", val);
    }
}

int Dequeue(struct queue *q)
{
    int val=-1;
    if(isEmpty(q))
    {
        printf("Queue is Empty");

    }
    else
    {
        (*q).f=((*q).f+1)%(*q).size;
        val=(*q).arr[(*q).f];
    }
    return val;
}

int main()
{
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    (*q).size=4;
    (*q).f=(*q).r=0;
    (*q).arr=(int *)malloc((*q).size*sizeof(int));
    Enqueue(q,23);
    Enqueue(q,3);
    Enqueue(q,13);
    Enqueue(q,13);
    printf("\n");

    printf("Dequeued Element : %d\n", Dequeue(q));
    printf("Dequeued Element : %d\n", Dequeue(q));
    printf("Dequeued Element : %d\n", Dequeue(q));

    Enqueue(q,13);
     
    return 0;
}