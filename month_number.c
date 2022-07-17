/* WAP which takes the month number as an input and display number of days in that month. */

#include<stdio.h>
int main() {

    int month_no;

    printf("Enter month number : ");
    scanf("%d", &month_no);

    // 1,3,5,7,8,10,12 months are of 31 days
    if(month_no == 1 || month_no == 3 || month_no == 5 || month_no == 7 || 
       month_no == 8 || month_no == 10 || month_no == 12) {
        printf("31");
    }
    // 4,6,9,11 months are of 30 days
    else if( month_no == 4 || month_no == 6 || month_no == 9 || month_no == 11) {
        printf("30");
    }
    // 2 means Feb. is of 28 or may be 29 days
    else if(month_no == 2) {
        printf("28");
    }
    else {
        printf("Invalid Month Number");
    }

    return 0;
}