#include<stdio.h>
void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void SelectionSort(int arr[],int n)
{
    int i,j,temp,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            min=j;
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main()
{
    int arr[6]={2,3,1,6,4,5},n=6;
    Display(arr,n);
    SelectionSort(arr,n);
    printf("\n");
    Display(arr,n);

    return 0;
}