#include <stdio.h>

// Global variable
int globalVar = 100;

void function1() {
    // Local variable
    int localVar = 10;

    printf("Inside function1: localVar = %d\n", localVar);
    printf("Inside function1: globalVar = %d\n", globalVar);
}

void function2() {
    // Trying to access localVar here will give an error
    // printf("Inside function2: localVar = %d\n", localVar); ❌ Not allowed

    printf("Inside function2: globalVar = %d\n", globalVar);
}

int main() {
    function1();
    function2();

    // Trying to access localVar here will also give an error
    // printf("In main: localVar = %d\n", localVar); ❌ Not allowed

    printf("In main: globalVar = %d\n", globalVar);

    return 0;
}
