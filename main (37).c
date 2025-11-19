#include <stdio.h>

int main() {
    int i;
    
    printf("Using FOR loop:\n");
    for(i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    
    printf("\n\nUsing WHILE loop:\n");
    i = 1;
    while(i <= 100) {
        printf("%d ", i);
        i++;
    }
    
    printf("\n\nUsing DO-WHILE loop:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while(i <= 100);
    
    return 0;
}