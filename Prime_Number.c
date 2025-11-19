#include <stdio.h>
int main() {
    int  num, b=0, c;
    printf("Enter terms: ");
    scanf("%d", &num);
    //int n=5;
    if(num <=1){
        return 0;
    }
    //printf("Fibonacci: ");
    for(int i=1; i<=num; i++) {
        if(num%i==0){
            b++;
        }
    }
    if(b==2)
        printf("%d is prime Number\n", num);
      else
      printf("%d is not prime Number",num);
    return 0;
}