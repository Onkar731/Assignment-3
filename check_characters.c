/* WAP to check whether a given character is an alphabet(uppercase), an alphabet(lowercase),
    a digit or a special character 
*/

#include<stdio.h>
int main() {

    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    // Uppercase lies between 65 to 90 ASCII code
    if(ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    }
    // Lowercase lies between 97 to 122 ASCII code
    else if(ch >= 'a' && ch <= 'z') {
        printf("Lowercase");
    }
    // Digits lies between 48 to 57 ASCII code
    else if(ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // Rest are lies in special character
    else {
        printf("Special Character");
    }

    return 0;
}