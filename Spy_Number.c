#include <stdio.h>

int main() {
    int num, digit, sum = 0, product = 1, temp;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    while(temp > 0) {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        temp = temp / 10;
    }
    
    if(sum == product) {
        printf("%d is a Spy number.\n", num);
    } else {
        printf("%d is not a Spy number.\n", num);
    }
    
    return 0;
}