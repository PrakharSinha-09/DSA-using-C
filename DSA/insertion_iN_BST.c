#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void inOrder(struct node *root)
{
    if(root!=NULL)                                              //until we dont get the leaf node, this function will keep running.
    {
        inOrder((*root).left);
        printf("%d ",(*root).data);
        inOrder((*root).right);
    }
}
struct node *createNode(int data)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    (*n).data=data;
    (*n).left=NULL;
    (*n).right=NULL;
    return n;
}

void insert(struct node *root,int value){
    struct node *prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if((*root).data==value)                          //Since Duplicacy is not allowed in BST.
        {
            printf("Insertion Not Possible");
        }
        else if((*root).data<value)
        {
            root=(*root).right;
        }
        else
        {
            root=(*root).left;
        }
    }
    struct node *new=createNode(value);
    if((*new).data<(*prev).data)
    {
        (*prev).left=new;
    }
    else if((*new).data>(*prev).data)
    {
        (*prev).right=new;
    }
}

int main()
{
    struct node *p=createNode(8);                 //Root Node                                              
    struct node *p1=createNode(3);                //First Node
    struct node *p2=createNode(9);                //Second Node            //Total 5 Nodes.
    struct node *p3=createNode(1);                //Third Node
    struct node *p4=createNode(5);                //Fourth Node


    /*
          8
         / \
        3   9
       / \
      1   5               We are in need of creating this binary search Tree.
           \
            6
    */

    (*p).left=p1;
    (*p).right=p2;
    (*p1).left=p3;
    (*p1).right=p4;
    
    inOrder(p);
    insert(p,6);
    printf("\n");
    inOrder(p);

    return 0;
}
