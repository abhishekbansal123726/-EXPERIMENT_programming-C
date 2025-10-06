#include <stdio.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    if (num <= 1)
        return 0; // 0 and 1 are not prime

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime number
}

int main() {
    int lower, upper;

    printf("Enter lower limit of range: ");
    scanf("%d", &lower);
    printf("Enter upper limit of range: ");
    scanf("%d", &upper);

    if (lower > upper) {
        printf("Invalid range! Lower limit must be less than upper limit.\n");
        return 0;
    }

    printf("\n-------------------------------------------------\n");
    printf("     Prime Numbers Between %d and %d\n", lower, upper);
    printf("-------------------------------------------------\n");

    int found = 0;
    for (int i = lower; i <= upper; i++) {
        if (ISPRIME(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found)
        printf("No prime numbers found in this range.");

    printf("\n-------------------------------------------------\n");

    return 0;
}

