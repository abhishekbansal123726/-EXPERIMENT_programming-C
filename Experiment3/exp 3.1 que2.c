#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input weight and height
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Print BMI value
    printf("Your BMI = %.2f\n", bmi);

    // Classify BMI
    if (bmi < 18.5) {
        printf("You are Underweight.\n");
    } 
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf("You are Normal weight.\n");
    } 
    else if (bmi >= 25 && bmi < 29.9) {
        printf("You are Overweight.\n");
    } 
    else {
        printf("You are Obese.\n");
    }

    return 0;
}
