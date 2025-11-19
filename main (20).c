#include <stdio.h>

int main() {
    int size, i, searchNumber, found = 0;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Input array elements
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input number to search
    printf("Enter the number to search: ");
    scanf("%d", &searchNumber);
    
    // Search for the number in array
    for(i = 0; i < size; i++) {
        if(arr[i] == searchNumber) {
            found = 1;
            break;
        }
    }
    
    // Display result
    if(found) {
        printf("%d is present in the array.\n", searchNumber);
    } else {
        printf("%d is not present in the array.\n", searchNumber);
    }
    
    return 0;
}