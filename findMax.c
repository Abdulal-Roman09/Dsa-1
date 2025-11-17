#include <stdio.h>

int findmax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int size, max, i;
    printf("plz enter the size of arr:");
    scanf("%d", &size);
    int arr[size];
    printf("plz enter the elelment of arr:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = findmax(arr, size);
    printf("the max element in arr is :%d", max);
    return 0;
}