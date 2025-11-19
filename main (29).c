#include <stdio.h>

int main() {
    int a, b, c, max;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Using logical operators to find maximum
    if(a >= b && a >= c) {
        max = a;
    } else if(b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    
    printf("The maximum of %d, %d, %d number is: %d\n", a, b, c, max);
    
    return 0;
}