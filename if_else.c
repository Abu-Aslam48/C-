// #include<stdio.h>
// int main(){
//      int num;
//      scanf("%d",&num);
//      if(num%2==0){
//           printf("%d is even number\n",num);
//      }
//      else if (num%2!=0){
//           printf("%d is odd number\n",num);

//      }
//      else{
//           printf("invalid inpot",num);

//      }
//      return 0;
// }


// #include<stdio.h>
// #include<stdbool.h>

// int main(){
//      int age =200;
//      char isCitizen =true;
//      bool hasCriminal=false;
//       if(age>=18 && isCitizen && !hasCriminal){
//     //if(age>=18 || isCitizen){
//      printf("you are eligible for vote\n");

//     }
//     else{
//      printf("you are not eligible for vote\n");
//     }
     
// }

// #include <stdio.h>

// int is_leap_year(int year) {
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         return 1; // Leap year
//     } else {
//         return 0; // Not a leap year
//     }
// }

// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if (is_leap_year(year)) {
//         printf("%d is a leap year.\n", year);
//     } else {
//         printf("%d is not a leap year.\n", year);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     float score1, score2, score3, average;

//     // Input three scores
//     printf("Enter first score: ");
//     scanf("%f", &score1);
//     printf("Enter second score: ");
//     scanf("%f", &score2);
//     printf("Enter third score: ");
//     scanf("%f", &score3);

//     // Calculate average
//     average = (score1 + score2 + score3) / 3;

//     // Determine grade using if-else statements
//     if (average >= 90) {
//         printf("Grade: A\n");
//     } else if (average >= 70) {
//         printf("Grade: B\n");
//     } else if (average >= 50) {
//         printf("Grade: C\n");
//     } else {
//         printf("Grade: F\n");
//     }

//     return 0;
// }


#include <stdio.h>
int main() {
   int var1 = 5, var2 = 3;

   // 5 is displayed
   // Then, var1 is increased to 6.
   printf("%d\n", var1++);

   // var2 is increased to 6 
   // Then, it is displayed.
   printf("%d\n", ++var2);

   return 0;
}
