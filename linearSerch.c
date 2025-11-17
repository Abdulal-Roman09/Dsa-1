#include <stdio.h>

int main()
{
    int n;
    printf("plz enter the size of arr:");

    scanf("%d", &n);
    int arr[n];
    printf("plz enter the elelment of arr:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int terget;
    printf("plz enter the terget of serch:");
    scanf("%d", &terget);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == terget)
        {
            printf("the terget found at index:%d", i);
            return 0;
        }
      
    }
    printf("the terget not found in arr");
    return 0;
}