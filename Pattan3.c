#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows); // Enter 4 for the exact pattern you requested

    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            // If the column index 'j' is odd, print 1. Otherwise, print 0.
            if (j % 2 != 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
