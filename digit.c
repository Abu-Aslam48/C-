#include <stdio.h>

int main() {
    int num, digit, sumSmallar=0,sumLarge=0;
    int smaller = 9, larger = 0;  // Initialize extremes

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Handle case when input is 0
    if (num == 0) {
        smaller = 0;
        larger = 0;
    }

    // Extract digits
    while (num > 0) {
        digit = num % 10;

        if (digit < smaller)
            smaller = digit;
            sumSmallar +=digit;

        if (digit > larger)
            larger = digit;
         sumLarge +=digit;
        num = num / 10;
    }

    printf("Smallest digit: %d\n", smaller);
    printf("Largest digit: %d\n", larger);
    printf("sum of number : %d",sumLarge);
    //printf("sum of number : %d",sumSmallar);
    return 0;
}
