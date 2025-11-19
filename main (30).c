#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Using modulo operator (%)
    if(num % 2 == 0) {
        printf("Using modulo: %d is EVEN\n", num);
    } else {
        printf("Using modulo: %d is ODD\n", num);
    }
    
    // Using bitwise AND operator (&)
    if((num & 1) == 0) {
        printf("Using bitwise: %d is EVEN\n", num);
    } else {
        printf("Using bitwise: %d is ODD\n", num);
    }
    
    return 0;
}