#include<stdio.h>
//difference between uppercase and lowercase letter is 32.
int main()
{
    printf("Enter Uppercase letter: ");
    char ch;
    scanf("%c",&ch);
    printf("Lowercase letter is: %c",ch+32);
}
