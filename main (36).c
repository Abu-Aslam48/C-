#include <stdio.h>

int main() {
    int number, sum = 0, count = 0;
    
    printf("Enter numbers (enter 0 to stop):\n");
    
    // Label for goto
    loop:
        printf("Enter a number: ");
        scanf("%d", &number);
        
        if(number != 0) {
            sum += number;
            count++;
            goto loop;  // Jump back to input_loop
        }
    
    printf("\n--- Results ---\n");
    printf("Total numbers entered: %d\n", count);
    printf("Sum of all numbers: %d\n", sum);
    
    
    return 0;
}