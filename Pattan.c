// #include <stdio.h>

// int main() {
//     int rows, i, j, num = 1;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; ++i) {
//         for (j = 1; j <= i; ++j) {
//             printf("%d ", num);
//             ++num; // Key: Increment the number every time a digit is printed
//         }
//         printf("\n");
//     }

//     return 0;
// }
// Use code with caution.

// Output for 4 rows:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 2. Binary Pattern (1s and 0s using Parity Check)
// This pattern determines whether to print 1 or 0 based on the sum of the row and column indices (i + j).
// c
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            // If the sum of row and column is even, print 1, otherwise print 0
            if ((i + j) % 2 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf("\n");
    }

    return 0;
}