#include <stdio.h>

int main(void) {
    int days_total = 420;
    int year= days_total/365;
    int month = (days_total%365) / 30;
    int week= ((days_total%365) % 30) / 7;
    int leftover_days = days_total % 365 % 30 % 7;

    printf("year:%d\n Months: %d\n week:%d\n Remaining days: %d\n", year,month,week, leftover_days);
    return 0;
}