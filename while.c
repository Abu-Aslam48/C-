#include<stdio.h>
int main(){
     int i=0;
     while(1){ //(while(1) means the code stop when say break
          i++;
          printf("Number:%d\n",i);
     
     if(i==5){
          continue;
     }
          if(i==10){

          
          break;
          }
     
     if(i%2==0){ 
     printf("Even Number: %d\n",i);}
     else{
          printf("Odd numbeer:%d\n",i);
     }
     //printf("The code is END **** ");
}
printf("The code is END **** ");
return 0;
}