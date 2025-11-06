//Number of sum of array: 
// #include<stdio.h>
// int main(){
//      int arr[5],sum=0;
//      printf("Enter 5 numbers:\n");
//      for(int i=0;i<5;i++){
//           scanf("%d",&arr[i]);
//           sum+=arr[i];
// }
//      printf("Sum of array elements: %d\n",sum);
//      return 0;
// }

// #include<stdio.h>
// int main(){
// int number[]={23,34,65,78,90};
// int length=sizeof(number)/sizeof(number[2]);
// for(int i=0;i<length;i++){
//      printf("Array Number %d:%d\n",i,number[i]);
// }

// return 0;
// }
 
//SUM And AVERAGE of ARRAY ELEMENTS
// #include<stdio.h>
// int main(){
//      int ages[200]={10,23,45,56,78,90};
//      int avg,sum=0;
//      int length=sizeof(ages)/sizeof(ages[1]);
//      for(int i=0;i<length;i++){
//           sum+=ages[i];
// }
//      avg=sum/length;
//      printf("Sum of ages: %d\n",sum);
//      printf("Average age: %d\n",avg);
//      return 0;
//  }

//Find the smallerest number on array: 
// #include<stdio.h>
// int main(){
//      int aees[]={12,23,45,56,78,90,8};
//      int length=sizeof(aees)/sizeof(aees[0]);
//      int lowest=aees[0];
//      for(int i=0;i<length;i++){
//      if(lowest > aees[i]){
//           lowest=aees[i];
//      }
     
//      }
//      printf("Lowest number is: %d\n",lowest);
// }


#include<stdio.h>

int main(){
    int num, digit;
    int smallar = 9, large = 0;
    scanf("%d",& num);
    
    if(num < 0)
        num = -num;
    
    if(num == 0) {
        smallar = 0;
        large = 0;
    }
    
    while(num > 0){
        digit = num % 10;
        if(digit < smallar)
            smallar = digit;  // Fixed: assign to smallar
        if(digit > large)
            large = digit;    // Fixed: assign to large
        num = num / 10;
    }
    
    printf("smallar: %d\n", smallar);
    printf("large: %d\n", large);
    
    return 0;
}