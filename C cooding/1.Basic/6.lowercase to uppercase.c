#include<stdio.h>
//difference between uppercase and lowercase letter is 32.
int main()
{
    printf("Enter lowercase letter: ");
    char lower;
    scanf("%c",&lower);
    printf("Uppercase letter is: %c",lower-32);
}

