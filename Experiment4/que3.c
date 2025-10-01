#include <stdio.h>

int main() {
    int x = 10; 
    printf("In main block: x = %d\n", x);

    {
        int y = 20; 
        printf("In inner block: x = %d\n", x); 
        printf("In inner block: y = %d\n", y); 
    }

    {
        int z = 30; 
        printf("In second inner block: z = %d\n", z);
    }


    return 0;
}
