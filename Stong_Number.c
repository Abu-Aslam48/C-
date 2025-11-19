#include <stdio.h>

int main() {
    int num, temp, digit, fact, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // store original number

    while (temp > 0) {
        digit = temp % 10;   // get last digit
        fact = 1;

        // find factorial of digit using loop
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum += fact;   // add factorial to sum
        temp = temp / 10;  // remove last digit
    }

    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}
