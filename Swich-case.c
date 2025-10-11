// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//      int num;
//      printf("Enter a number between 1 to 7\n");
//      scanf("%d",&num);
//      switch(num){
//           case 1:
//                printf("Monday\n");
//                break;
//           case 2:
//                printf("Tuesday\n");
//                break;
//           case 3:
//                printf("Wednesday\n");
//                break;
//           case 4:
//                printf("Thursday\n");
//                break;
//           case 5:
//                printf("Friday\n");
//                break;
//           case 6:
//                printf("Saturday\n");
//                break;
//           case 7:
//                printf("Sunday\n");
//                break;
//           default:
//                printf("Invalid input\n");
//      }
//      return 0;
// }


// #include<stdio.h>
// int main(){
//      int op;
//      float num1,num2,result;
//      printf("Welcome to Calculator\n");
//      scanf("%c %f %f",&op,&num1,&num2);
//      switch (op)
//      {
//      case '+':
//           /* code */
//           result=num1+num2;
//           //printf("The sum of %c  %.2f  %.2f",op,num1,num2,result);
//           printf("%f %c %f = %f\n", num1, op, num2, result);
//           break;
     
//      default:
//      printf("Invalid input");
//           break;
//      }
// }
#include<stdio.h>
int main(){
int i=2;
if(i==1){
     goto case1;
}
if(i==2){
     goto case2;
}
case1:
     printf("Monday\n");
     goto end;
case2:
     printf("Tusday\n");
     goto end ;
end:
     //printf("End of program\n");
     return 0;
}