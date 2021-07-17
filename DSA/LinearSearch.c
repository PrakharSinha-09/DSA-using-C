#include <stdio.h>
void Display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void linearSearch(int arr[],int size,int element)
{
    int found=0;
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
        {
            printf("\n%d Found @ index %d ",element,i+1);
            found=1;
            break;
        }
    }
    if(!found)
    printf("%d is not in the given array ",element);

}

int main()
{
    int arr[7]={2,5,6,3,1,6,8},size=7,element=3;
    Display(arr,size);
    linearSearch(arr,size,element);
}