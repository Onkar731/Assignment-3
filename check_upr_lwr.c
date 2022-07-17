/* WAP to check whether a given alphabet is in uppercase orlowercase */

#include<stdio.h>
int main() {
    
    char ch;

    printf("Enter a alphabet : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("Lowercase");
    }
    else {
        printf("Invalid Alphabet");
    }

    return 0;
}