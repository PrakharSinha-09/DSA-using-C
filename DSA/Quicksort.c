#include<stdio.h>
void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int partition(int arr[],int low,int high)
{
    int i,j,pivot,temp;
    pivot=arr[low];
    i=low;
    j=high;

    while (i<j)
    {
        while(arr[i]<=pivot)
        i++;

        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
    }
    temp=arr[low];                           //if i<j , swap pivot element with jth element.
    arr[low]=arr[j];
    arr[j]=temp;

    return j;
    
}

void Quicksort(int arr[],int low,int high)
{
    int PivotIndex;
    if(low<high)
    {
        PivotIndex=partition(arr,low,high);
        Quicksort(arr,low,PivotIndex-1);
        Quicksort(arr,PivotIndex+1,high);
    }
}
int main()
{
    int arr[6]={2,3,1,6,4,5},n=6;
    Display(arr,n);
    Quicksort(arr,0,n-1);
    printf("\n");
    Display(arr,n);

    return 0;
}