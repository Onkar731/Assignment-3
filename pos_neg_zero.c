/* WAP to check whether a given number is positive, negative or zero */

#include<stdio.h>
int main() {

    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    // If number is greater than zero
    if(num > 0) {
        printf("Positive");
    }
    // If number is smaller than zero
    else if(num < 0) {
        printf("Negative");
    }
    // If number is neither greater nor smaller
    else {
        printf("Zero");
    }

    return 0;
}