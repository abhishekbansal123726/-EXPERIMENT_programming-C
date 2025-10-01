#include <stdio.h>

int main() {
    double population = 100000; // Initial population
    int year;
    double growth_rate = 0.10; // 10%

    printf("Year\tPopulation\n");
    printf("--------------------\n");

    for(year = 1; year <= 10; year++) {
        population = population + (population * growth_rate); // Increase by 10%
        printf("%d\t%.0lf\n", year, population);
    }

    return 0;
}
