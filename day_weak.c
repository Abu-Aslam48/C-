/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// 
//#include <stdio.h>

// int main() {
//     int days_total = 456;
//     int month = days_total / 30;
//     int year=days_total/365;
//     int leftover_days = days_total % 30;
//     int leftover_dayss=((days_total%365)%30)%7;

//     printf("Year: %d\n ,Months: %d\n, Remaining days: %d\n, pookis days:%d\n",year, month, leftover_days,leftover_dayss);
//     return 0;
// }
#include <stdio.h>

int main(void) {
    int days_total = 456;
    int year=days_total/365;
    int month = days_total / 30;
    int week=days_total/7;
    int leftover_days = days_total % 30;

    printf("year: %d\n,Months: %d, Remaining days: %d\n ,week= %d\n",year, month, leftover_days,week);
    return 0;
}
