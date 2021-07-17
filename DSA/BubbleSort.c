#include<stdio.h>
void Display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void BubbleSort(int arr[],int size)
{
    int i,j,temp,isSorted=0;
    for(i=0;i<size-1;i++)                            //For No. Of Passes.
    {
        isSorted=1;
        for(j=0;j<size-1-i;j++)                   //For No. Of Comparisons.
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted)
        {
             return;
        }
        
    }

}
int main()
{
    int arr[6]={2,3,1,6,4,5},size=6;
    Display(arr,size);
    BubbleSort(arr,size);
    printf("\n");
    Display(arr,size);

}
