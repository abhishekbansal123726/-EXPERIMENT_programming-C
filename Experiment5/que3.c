#include <stdio.h>

int main() {
    int n, i, key, count = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number whose frequency you want to find: ");
    scanf("%d", &key);
    
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    
    printf("The frequency of %d is: %d\n", key, count);
    
    return 0;
}
