#include <stdio.h>
#include <math.h>

int main() {
    int limit, i, j, k, l;
    int sum1, sum2;

    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    printf("Ramanujan numbers up to %d are:\n", limit);

    // Check all combinations of i^3 + j^3 and k^3 + l^3
    for(i = 1; i <= cbrt(limit); i++) {
        for(j = i; j <= cbrt(limit); j++) {
            sum1 = i*i*i + j*j*j;
            if(sum1 > limit)
                continue;

            for(k = i+1; k <= cbrt(limit); k++) {
                for(l = k; l <= cbrt(limit); l++) {
                    sum2 = k*k*k + l*l*l;

                    if(sum1 == sum2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, i, j, k, l);
                    }
                }
            }
        }
    }

    return 0;
}
