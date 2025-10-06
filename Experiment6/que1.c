#include <stdio.h>

// Recursive function to calculate factorial
long FACT_recursive(int num) {
    if (num == 0)
        return 1;
    else
        return num * FACT_recursive(num - 1);
}

// Non-recursive function to calculate factorial
long FACT_nonrecursive(int num) {
    long fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

// Function to compute binomial coefficient using factorial
long BINOMIAL(int n, int r, int recursive) {
    long nFact, rFact, nrFact;
    if (recursive) {
        nFact = FACT_recursive(n);
        rFact = FACT_recursive(r);
        nrFact = FACT_recursive(n - r);
    } else {
        nFact = FACT_nonrecursive(n);
        rFact = FACT_nonrecursive(r);
        nrFact = FACT_nonrecursive(n - r);
    }
    return nFact / (rFact * nrFact);
}

int main() {
    int n, r, choice;

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! Ensure that 0 <= r <= n.\n");
        return 0;
    }

    printf("\nChoose method to calculate factorial:\n");
    printf("1. Recursive\n");
    printf("2. Non-Recursive\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    long result;
    if (choice == 1)
        result = BINOMIAL(n, r, 1);
    else
        result = BINOMIAL(n, r, 0);

    printf("\n---------------------------------------------\n");
    printf("      Binomial Coefficient Table (nCr)      \n");
    printf("---------------------------------------------\n");
    printf("  n   |   r   |    nCr Value (using %s)\n", 
           (choice == 1) ? "Recursive" : "Non-Recursive");
    printf("---------------------------------------------\n");
    printf("  %d   |   %d   |    %ld\n", n, r, result);
    printf("---------------------------------------------\n");

    return 0;
}

