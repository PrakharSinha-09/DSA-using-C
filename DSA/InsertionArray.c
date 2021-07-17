#include <stdio.h>
void Display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insertion(int arr[],int size,int index,int element)
{
    int i;
    for(i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[index]=element;
}
int main()
{
    int arr[7]={2,5,6,3,1,6,8},size=7,element=3,index=2;
    Display(arr,size);
    insertion(arr,size,index,element);
    size++;
    printf("\n");
    Display(arr,size);

    return 0;
}