#include<stdio.h>
//difference between uppercase and lowercase letter is 32.
int main()
{
    printf("Enter Uppercase letter: ");
    char uppercase,lowercase;
    scanf("%c",&uppercase);
    lowercase=tolower(uppercase);

    //printf("Lowercase letter is: %c",tolower(ch));
    printf("Lowercase letter is: %c",lowercase);
}

