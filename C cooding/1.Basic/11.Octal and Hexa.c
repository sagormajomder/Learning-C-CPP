#include<stdio.h>

int main()
{
    printf("Enter Octal Number:");
    int octal;
    scanf("%o",&octal);
    printf("Hexa Number is: %x\n\n",octal);

    printf("Enter Hexa Number:");
    int hexa;
    scanf("%x",&hexa);
    printf("Octal Number is: %o\n\n",hexa);
}
