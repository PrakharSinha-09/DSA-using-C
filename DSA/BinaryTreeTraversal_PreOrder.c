#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void preOrder(struct node *root)
{
    if(root!=NULL)                                    //until we dont get the leaf node, this function will keep running.
    {
        printf("%d ",(*root).data);
        preOrder((*root).left);
        preOrder((*root).right);
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

int main()
{

    struct node *p=createNode(4);                 //Root Node                                              
    struct node *p1=createNode(1);                //First Node
    struct node *p2=createNode(6);                //Second Node            //Total 5 Nodes.
    struct node *p3=createNode(5);                //Third Node
    struct node *p4=createNode(2);                //Fourth Node


    /*
              4
             / \                     We are in need of creating this binary Tree.
            1   6
           / \    
          5   2 
    */

    (*p).left=p1;
    (*p).right=p2;
    (*p1).left=p3;
    (*p1).right=p4;
    

    preOrder(p);

    return 0;
}
