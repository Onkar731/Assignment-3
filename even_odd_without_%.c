/* WAP to check whether a given number is even or odd without using % */

#include<stdio.h>
int main() {

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    // Checking whether number is even or odd
    // & bitwise and is used to check whether 1 is present on LSB or not
    if(num & 1) {
        printf("Odd");
    }
    else {
        printf("Even");
    }

    return 0;
}