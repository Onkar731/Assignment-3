/* WAP to check whether a given number is even or odd */

#include<stdio.h>
int main() {

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    // Checking whether number is even or odd
    if(num % 2) {
        printf("Odd");
    }
    else {
        printf("Even");
    }

    return 0;
}