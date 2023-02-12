#include<stdio.h>
//difference between uppercase and lowercase letter is 32.
int main()
{
    printf("Enter Lowercase letter: ");
    char uppercase,lowercase;
    scanf("%c",&lowercase);
    uppercase=toupper(lowercase);

    //printf("Lowercase letter is: %c",tolower(ch));
    printf("Uppercase letter is: %c",uppercase);
}


