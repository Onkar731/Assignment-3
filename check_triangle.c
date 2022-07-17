/* WAP which takes the length of the sides of a triangle as an input.
   Display whether the triangle is valid or not.
*/

#include<stdio.h>
int main() {

    int l1, l2, l3;

    printf("Enter length of the three sides of the triangle : ");
    scanf("%d%d%d",&l1, &l2, &l3);

    // sum of two sides is greater than its third side
    if((l1 + l2) > l3 && (l2 + l3) > l1 && (l3 + l1) > l2) {
        printf("Triangle is Valid");
    }
    else {
        printf("Triangle is not Valid");
    }

    return 0;
}