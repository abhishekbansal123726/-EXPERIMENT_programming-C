#include <stdio.h>

int main() {
    int num, i;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    // Loop from 1 to 10
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
