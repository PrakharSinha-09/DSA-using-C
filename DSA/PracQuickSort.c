#include<stdio.h>
void Display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ", A[i]);
    }
}
int partition(int A[],int low,int high)
{
    int i,j,pivot,temp;
    pivot=A[low];
    i=low;
    j=high;

    while(i<j)
    {
        while(A[i]<=pivot)
        {
            i++;
        }
        while(A[j]>pivot)
        {
            j--;
        }    
        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }    
    }
    temp=A[j];
    A[j]=A[low];
    A[low]=temp;

    return j;
}

void QuickSort(int A[],int low,int high)
{
    int PivotIndex;
    if(low<high)
    {
        PivotIndex=partition(A,low,high);
        QuickSort(A,low,PivotIndex-1);
        QuickSort(A,PivotIndex+1,high);
    }
}

int main()
{
    int A[6]={2,3,1,6,4,5},n=6;
    Display(A,n);
    QuickSort(A,0,n-1);
    printf("\n");
    Display(A,n);

    return 0;
}