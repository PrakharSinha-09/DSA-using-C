#include<stdio.h>
void Display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",A[i]);
    }
}
void Merge(int A[],int low,int mid,int high)
{
    int i,j,k,B[100];
    i=low;
    j=mid+1;
    k=low;

    while(i<=mid && j<=high)
    {
        if(A[i]<A[j])
        {
            B[k]=A[i];
            k++;
            i++;
        }
        else
        {
            B[k]=A[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        B[k]=A[i];
        i++;
        k++;

    }
    while(j<=high)
    {
        B[k]=A[j];
        k++;
        j++;
    }
    for (i=low;i<=high;i++)
    {
        A[i]=B[i];
    }   
}
void MergeSort(int A[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        MergeSort(A,0,mid);
        MergeSort(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}
int main()
{
    int A[]={2,4,2,1,6,3,7},n=7;
    Display(A,n);
    MergeSort(A,0,n-1);
    printf("\n");
    Display(A,n);
    return 0;
}
