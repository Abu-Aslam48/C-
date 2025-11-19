#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    // Calculate sum of digits
    while(num > 0) {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    
    printf("Sum of digits = %d\n", sum);
    
    // Check if divisible by sum of digits
    if(original % sum == 0) {
        printf("%d is a Harshad Number\n", original);
    } else {
        printf("%d is not a Harshad Number\n", original);
    }
    
    return 0;
}