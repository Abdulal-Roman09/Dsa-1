#include <stdio.h>

int main() {
    int n, i, num, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num; // Initialize max with first number

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num; // Update max if current number is greater
        }
    }

    printf("Maximum number: %d\n", max);
    return 0;
}
