#include <stdio.h>
int main()
{
    int A[10], i, n, large, fact = 1, j;
    printf("Enter The Size Of Array");
    scanf("%d", &n);

    printf("insert The Elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }

    //To Get the LArgest Element in array.
    large = A[0];
    for (i = 0; i < n; i++)
    {
        if (large < A[i])
        {
            large = A[i];
        }
    }
    printf("Largest Element in Array is %d ", large);
    printf("\n");

    //factorial of largest element.
    for (j = 1; j <= large; j++)
    {
        fact = fact * j;
    }
    printf("Factorial Of Largest Element %d iN Array is = %d", large, fact);
}