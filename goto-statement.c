// #include <stdio.h>

// int main (){

//    int i ;
//    scanf("%d", &i);
//    if (i % 2 == 0){
//       EVEN:
//          printf("The number is even \n");
//          goto END;
//    }
//    else{
//       ODD:
//       printf("The number is odd \n");
//       goto END;
//    }
//    END:
//       printf("End of program");

//    return 0;
// }


#include <stdio.h>
int main(){
   int i = 0;
   START:
      i++;
      printf("%d\n", i);
      if (i == 5)
      //i++;
      //printf("%d\n",i);
         goto END;
         goto START;
   END:
      printf("End of loop");
   return 0;
}

// #include <stdio.h>
// int main() {
//     int counter = 0;
    
// retry:
//     counter++;
//     if (counter <= 3) {
//         printf("Retry attempt %d\n", counter);
//         goto retry; // Retry the operation
//     }
// END:
//     printf("Operation completed after %d attempts.\n", counter);

//     return 0;
// }