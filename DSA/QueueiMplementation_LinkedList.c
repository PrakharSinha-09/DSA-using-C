#include<stdio.h>
#include<stdlib.h>

struct node *f=NULL;
struct node *r=NULL;

struct node{
    int data;
    struct node *next;
};

void LinkedlistTraversal(struct node *ptr){
    while(ptr!=NULL)
    {
        printf("%d ",(*ptr).data);
        ptr=(*ptr).next;
    } 
}

void Enqueue(int data){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL){
        printf("Queue iS Full");
    }
    else{
        (*new).next=NULL;
        (*new).data=data;
        if(f==NULL && r==NULL){
            f=r=new;
        }
        else{
            (*r).next=new;
            r=new;
        }
    }
}

int dequeue()
{
    int val=-1;
    struct node *ptr=f;
    if(f==NULL){
        printf("Queue iS Empty");
    }
    else{
        f=(*f).next;
        val=(*ptr).data;
        free(ptr);
    }
    return val;
}

int main(){
    LinkedlistTraversal(f);
    printf("Dequed Element : %d \n",dequeue());
    Enqueue(30);
    Enqueue(33);
    Enqueue(32);
    printf("Dequed Element : %d \n",dequeue());
    LinkedlistTraversal(f);
}