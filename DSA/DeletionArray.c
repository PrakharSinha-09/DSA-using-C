#include<stdio.h>
void Display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void Deletion(int arr[],int size,int index)
{
    int i;
    for(i=index;i<size;i++)
    {
        arr[i]=arr[i+1];
    }

}
int main()
{
    int arr[]={2,3,4,1,8,5,6},size=7,index=2;
    Display(arr,size);
    Deletion(arr,size,index);
    size--;
    printf("\n");
    Display(arr,size);
}