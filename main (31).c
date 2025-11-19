#include <stdio.h>

int main() {
    int n, i, temp, sum = 0;
    
    // Step 1: Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];  // Declare array
    
    // Step 2: Input array elements
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add to sum while reading
    }
    
    // Step 3: Display original array
    //printf("\nOriginal Array: ");
    //for(i = 0; i < n; i++) {
       // printf("%d ", arr[i]);
    //}

    // Step 4: Reverse array using swapping
    for(i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Step 5: Display reversed array
    printf("\nReversed Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Step 6: Display sum of elements
    printf("\nSum of elements: %d\n", sum);
    
    return 0;
}
