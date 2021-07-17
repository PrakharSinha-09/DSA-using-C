#include <stdio.h>
void Display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int BinarySearch(int arr[], int element, int size)
{
    int i, low, high, mid;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
            return mid;

        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}


int main()
{
    int arr[14] = {1, 2, 3, 4, 5, 6, 7, 12,34,45,53,67,68,70}, size = 14, element = 5;
    Display(arr, size);
    printf("The Element %d is @ %d ", element, BinarySearch(arr, element, size)+1);

    return 0;
}