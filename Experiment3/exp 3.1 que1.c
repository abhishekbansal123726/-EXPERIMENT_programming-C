#include <stdio.h>

int main() {
    float a, b, c;

    // Input sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity using Triangle Inequality Theorem
    if ( (a + b > c) && (a + c > b) && (b + c > a) ) {
        printf("The triangle is valid.\n");

        // Check for Equilateral
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        // Check for Isosceles
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        // Check for Right Angled (Pythagoras theorem)
        else if ( (a*a + b*b == c*c) || 
                  (a*a + c*c == b*b) || 
                  (b*b + c*c == a*a) ) {
            printf("The triangle is Right-angled.\n");
        }
        // If none of the above → Scalene
        else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
