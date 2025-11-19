#include <stdio.h>

int main() {
    int a, b, min;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Using ternary operator to find minimum
    min = (a < b) ? a : b;
    
    printf("The minimum of %d and %d is: %d\n", a, b, min);
    
    return 0;
}