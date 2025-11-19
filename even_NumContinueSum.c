#include <stdio.h>

int main() {
    int start, end, i, sum = 0;

    printf("Enter starting limit: ");
    scanf("%d", &start);

    printf("Enter ending limit: ");
    scanf("%d", &end);

   // printf("\nEven numbers between %d and %d:\n", start, end);

    for(i = start; i <= end; i++) {
        if(i % 2 == 0) {        // Check even number
            printf("%d ", i);
            sum += i;  
          printf("even digit: %d\n",i); // Add to sum
        }
        //printf("even digit: %d\n",i); 
    }
//printf("even digit: %d\n",i);
    printf("\n\nSum of even numbers = %d\n", sum);

    return 0;
}
