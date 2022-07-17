/* WAP to check whether roots of a given quadratic equation are real & distinct,
    real & equal or imaginary roots */

    #include<stdio.h>
    int main() {

        int a, b, c, discriminant;

        printf("Enter Three Values : ");
        scanf("%d%d%d", &a, &b, &c);

        discriminant = b*b - 4*a*c; // calculating discriminant which tells us 
                                    // whether the roots are distinct, equal or imaginary
                                    // depending on the sign of the value.

        if(discriminant > 0) {
            printf("Real and Distinct roots");
        }
        else if(discriminant == 0) {
            printf("Real and Equal roots");
        }
        else {
            printf("Imaginary roots");
        }

        return 0;
    }