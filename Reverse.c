#include <stdio.h>

int main() {
    int num, reversed = 0, remainder,noi;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int original = num;
    
    while(original>0) {
        remainder = original % 10;
        reversed = reversed * 10 + remainder;
        original = original / 10;
        noi ++;
        
    }
    
    printf("Reverse of  = %d\n", reversed);
    return 0;
}