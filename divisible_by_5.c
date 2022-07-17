/* WAP to check whether a given number is divisible by 5 or not */

#include<stdio.h>
int main() {

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    // Checking whether number is divisible by 5 or not
    if(num % 5) {
        printf("%d is not divisible by 5", num);
    }
    else {
        printf("%d is divisible by 5", num);
    }

    return 0;
}