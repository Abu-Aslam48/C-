#include <stdio.h>

// User-defined function to calculate factorial
int fact(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    return factorial;
}

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // store original number

    while (temp > 0) {
        digit = temp % 10;   // get last digit
        
        // Use the fact() function to calculate factorial
        sum += fact(digit);   // add factorial to sum
        
        temp = temp / 10;  // remove last digit
    }

    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}