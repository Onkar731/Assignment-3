/* WAP to print greater between two numbers. Print one number of both are the same. */

#include<stdio.h>
int main() {

    int num1, num2;

    printf("Enter two numbers : ");
    scanf("%d%d",&num1, &num2);

    if(num1 > num2) {
        printf("%d is Greater", num1);
    }
    else if( num1 == num2) {
        printf("%d Same", num1);
    }
    else {
        printf("%d is Greater", num2);
    }

    return 0;
}