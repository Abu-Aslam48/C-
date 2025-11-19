#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("You entered: %d, %d, %d\n", a, b, c);
    
    if(a >= b && a >= c) {
        printf("%d is the GREATEST number\n", a);
    } else if(b >= a && b >= c) {
        printf("%d is the GREATEST number\n", b);
    } else {
        printf("%d is the GREATEST number\n", c);
    }
    
    return 0;
}