#include<stdio.h>
int main(){
    int rows, i, j;
    scanf("%d",&rows);
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){  // Changed / to %
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}