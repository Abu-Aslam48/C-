// #include<stdio.h>
// #include<stdbool.h>
// int main(){
// int num;
// bool isCitizen=false;
// scanf("%d",&num);
// if(num >= 18) {
//      if(isCitizen ){
//           printf("You are eligible for vote\n");
//      }
// }
//       else{
//           printf("You are not eligible for vote\n");
//      }
    
// }
#include<stdio.h>
#include<stdbool.h>
int main(){
     int age;
     bool isCitegen;
     bool hasCriminal;
     scanf("%d",&age);
     printf("Enter 1 for citizen and 0 for non citizen\n");
     scanf("%d",(int*)&isCitegen);
     printf("Enter 1 for has Criminal and 0 for no criminal record\n");
     scanf("%d",(int*)&hasCriminal);
     if (age>=18){
          if(isCitegen && !hasCriminal){
               printf("you are eligible for vote\n");
          }
     }
          else{
               printf("you are not eligible for vote");
          }
     }



