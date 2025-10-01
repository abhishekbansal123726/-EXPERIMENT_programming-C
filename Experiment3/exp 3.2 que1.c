#include <stdio.h>

int main() {
    int num;
    char choice;
    int positive = 0, negative = 0, zero = 0;

    do {
        // Input a number
        printf("Enter a number: ");
        scanf("%d", &num);

        // Count positive, negative, or zero
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;

        // Ask user if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // space before %c to consume newline

    } while (choice == 'y' || choice == 'Y');

    // Display the counts
    printf("\nCount of Positive numbers: %d\n", positive);
    printf("Count of Negative numbers: %d\n", negative);
    printf("Count of Zeroes: %d\n", zero);

    return 0;
}
