#include <stdio.h>
#include <string.h>

// Function to reverse a string
void REVERSE(char str[]) {
    int i, j;
    char temp;
    int len = strlen(str);

    // Swap characters from both ends moving toward the center
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("\n-------------------------------------------\n");
    printf("      Original String: %s\n", str);

    REVERSE(str);  // Function call

    printf("      Reversed String: %s\n", str);
    printf("-------------------------------------------\n");

    return 0;
}

