#include<stdio.h>
void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void InsertionSort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<=n-1;i++)
    {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
        {

            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;      
    }

}
int main()
{
    int arr[6]={2,3,1,6,4,5},size=6;
    Display(arr,size);
    InsertionSort(arr,size);
    printf("\n");
    Display(arr,size);

}