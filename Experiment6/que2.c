#include <stdio.h>

// Recursive function to find GCD
int GCD(int num1, int num2) {
    if (num2 == 0)
        return num1;               // Base case
    else
        return GCD(num2, num1 % num2);  // Recursive call
}

int main() {
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Handle negative numbers
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    result = GCD(a, b);

    printf("\n------------------------------------\n");
    printf("     Greatest Common Divisor (GCD)   \n");
    printf("------------------------------------\n");
    printf("  Numbers: %d and %d\n", a, b);
    printf("  GCD: %d\n", result);
    printf("------------------------------------\n");

    return 0;
}

