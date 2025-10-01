#include <stdio.h>

// Global variable
int num = 10;

// Function 1
void display1() {
    printf("In display1, num = %d\n", num);
}

// Function 2
void display2() {
    printf("In display2, num = %d\n", num);
}

// Main function
int main() {
    printf("In main, num = %d\n", num);

    // Call functions that use global variable
    display1();
    display2();

    // Modify global variable
    num = 50;
    printf("After modifying in main, num = %d\n", num);

    display1(); // Check again after modification
    return 0;
}
