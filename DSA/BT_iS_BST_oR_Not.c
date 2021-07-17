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

int isBST(struct node *root)                               //Modified form of inorder traversal to check "ASSENDIC-TA" of this bianry tree.
{
    static struct node *prev=NULL;
    if(root!=NULL)
    {
        if(!isBST((*root).left))
        {
            return 0;
        }
        if(prev!=NULL && (*root).data <= (*prev).data)
        {
            return 0;
        }       
        prev=root;
        return isBST((*root).right);
    }
    else{
        return 1;
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

    struct node *p=createNode(8);                 //Root Node                                              
    struct node *p1=createNode(3);                //First Node
    struct node *p2=createNode(9);                //Second Node            //Total 5 Nodes.
    struct node *p3=createNode(1);                //Third Node
    struct node *p4=createNode(5);                //Fourth Node


    /*
              8
             / \                     We are in need of creating this binary Tree.
            3   9
           / \    
          1   5
    */

    (*p).left=p1;
    (*p).right=p2;
    (*p1).left=p3;
    (*p1).right=p4;
    

    inOrder(p);
    printf("\n");

    if(isBST(p))
    {
        printf("This Binary Tree is BST");
    }
    else
    {
        printf("This Binary tree is not a BST");
    }

    return 0;
}