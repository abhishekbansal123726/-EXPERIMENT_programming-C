#include <stdio.h>

int main() {
    int n, i, largest, second;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Reading elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    // Find second largest
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("The second largest number is: %d\n", second);

    return 0;
}
