/* WAP to check whether a given number is positive or non-positive */

#include<stdio.h>
int main() {

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);
    
    // checking number is greater than 0 or not
    if(num > 0) {
        printf("%d is positive", num);
    }
    else {
        printf("%d is non-positive",num);
    }

    return 0;
}