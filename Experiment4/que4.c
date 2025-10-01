#include <stdio.h>

void counterFunction() {
    // Static local variable
    static int count = 0;

    // Normal local variable
    int normal = 0;

    count++;
    normal++;

    printf("count = %d, normal = %d\n", count, normal);
}

int main() {
    // Call function multiple times
    counterFunction();
    counterFunction();
    counterFunction();
    return 0;
}
