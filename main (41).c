#include <stdio.h>

int main() {
    int num, rem, sum = 0, digit = 0, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; // Store original number for later use

    while (temp > 0) {
        rem = temp % 10;        // Get last digit
        sum += rem;             // Add to sum
        reverse = reverse * 10 + rem; // Build reversed number
        temp = temp / 10;       // Remove last digit
        digit++;                // Count digits
    }

    printf("\nNumber of digits: %d", digit);
    printf("\nSum of digits: %d", sum);
    printf("\nReversed number: %d\n", reverse);

    return 0;
}
