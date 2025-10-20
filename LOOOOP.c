// #include <stdio.h>

// int main()
// {
//    int num =234567;
//    int rem,rev=0;
//    while(num>0){
//        rem=num%10;
//        num=num/10;
//        rev=rev*10+rem;   //rev=0*10+7=7; rev=7*10+6=76; rev=76*10+5=765;
//    }
   
// printf("revarse %d\n",rev);
//     return 0;
// }

//Factorial of a number
// #include<stdio.h>
// int main(){
//      int num,fact=1;
//      scanf("%d" ,&num);
//      for(int i=1;i<=num;i++){
//      fact*=i;
//      printf("Factorial Number%d: %d\n",num,fact);
//      }
// }

// number of some digits to sum;

// #include <stdio.h>

// int main(){
// int num;
// scanf("%d",&num);
// int n,rem,sum=0;
// while(num>0){
//     rem=num%10;
//     num=num/10;
//     sum+=rem;
// }
// printf("The number of sum: %d",sum);

//  return 0;
// }

//Multiplication table
// #include<stdio.h>
// int main(){
// int i,num;
// scanf("%d",&num);
// for(i=1;i<=10;i++){
//      //for(j=1;j<=10;j++){
//           printf("%d x %d = %d\n",i,num,i*num);
//      }
//      printf("\n");
// }

//Even numbers start to end 
#include <stdio.h>
int main() {
    int start, end;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    for(int i=start; i<=end; i++)
        if(i%2==0)
        printf("%d ", i);
    return 0;
}



