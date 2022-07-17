/* WAP which takes the cost price and selling price of a product from the user.
    Now calculate and print profit or loss percentage. 
*/

#include<stdio.h>
int main() {

    int cp, sp;
    double result;

    printf("Enter cost price and selling price of a product : ");
    scanf("%d %d", &cp, &sp);

    if( cp > sp ) {
        result = (cp - sp) * 100.0 / cp;
        printf("%.2lf%% Loss", result);
    }
    else {
        result = (sp - cp) * 100.0 / cp;
        printf("%.2lf%% Profit", result);
    }

    return 0;
}