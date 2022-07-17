/* WAP to check whether a given number is divisible by 7 or 3 */

#include<stdio.h>
int main() {

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    // To satisfy either one of the condition we must use logical OR operator
    if(num % 7 == 0 || num % 3 == 0) {
        printf("%d is divisible by 7 or 3", num);
    }
    else {
       printf("%d is not divisible by 7 or 3", num);
    }

    return 0;
}