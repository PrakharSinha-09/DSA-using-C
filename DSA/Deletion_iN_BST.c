#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

void inOrderTraversal(struct node *root){
    if(root!=NULL)
    {
        inOrderTraversal((*root).left);
        printf("%d ",(*root).data);
        inOrderTraversal((*root).right);
    }
}
struct node *PreOrder(struct node *root)
{
    root=(*root).left;
    while((*root).right!=NULL)
    {
        root=(*root).right;
    }
    return root;
}
struct node *DeleteNode(struct node *root, int value)
{
    struct node *iPre;
    if(root==NULL)
    {
        return NULL;
    }
    if((*root).left==NULL && (*root).right==NULL)             //it means we got the leaf node.
    {
        free(root);
        return NULL;
    }

    if(value<(*root).data)
    {
        (*root).left=DeleteNode((*root).left , value);
    }
    else if(value>(*root).data)
    {
        (*root).right=DeleteNode((*root).right , value);
    }

    //Deleting LOgic
    else{
        iPre=PreOrder(root);
        (*root).data=(*iPre).data;
        (*root).left=DeleteNode((*root).left,(*iPre).data);
    }
    return root;
}

struct node *createNode(int data)
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    (*n).data=data;
    (*n).right=NULL;
    (*n).left=NULL;
}

int main()
{
    struct node *p=createNode(4);                                              
    struct node *p1=createNode(1);
    struct node *p2=createNode(6);             
    struct node *p3=createNode(5);
    struct node *p4=createNode(2);  

    (*p).left=p1;
    (*p).right=p2;
    (*p1).left=p3;
    (*p1).right=p4;
    
    inOrderTraversal(p);  
    printf("\n");
    DeleteNode(p,6);
    inOrderTraversal(p);  
}
