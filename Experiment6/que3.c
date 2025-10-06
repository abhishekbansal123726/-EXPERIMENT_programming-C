#include <stdio.h>

// Recursive function to find nth Fibonacci number
int FIBO(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("\n-------------------------------------------\n");
    printf("     Fibonacci Sequence (using Recursion)   \n");
    printf("-------------------------------------------\n");
    printf("First %d terms of Fibonacci sequence:\n", n);

    for (i = 0; i < n; i++) {
        printf("%d ", FIBO(i));
    }

    printf("\n-------------------------------------------\n");

    return 0;
}

