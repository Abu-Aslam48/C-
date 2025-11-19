#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int count = 0;
    
    printf("Enter numbers (enter 0 to stop):\n");
    
    // Label for goto
    input_loop:
        printf("Enter a number: ");
        scanf("%d", &number);
        
        if(number != 0) {
            sum += number;
            count++;
            goto input_loop;  // Jump back to input_loop
        }
    
    printf("\n--- Results ---\n");
    printf("Total numbers entered: %d\n", count);
    printf("Sum of all numbers: %d\n", sum);
    
    if(count > 0) {
        printf("Average: %.2f\n", (float)sum / count);
    } else {
        printf("No numbers were entered.\n");
    }
    
    return 0;
}