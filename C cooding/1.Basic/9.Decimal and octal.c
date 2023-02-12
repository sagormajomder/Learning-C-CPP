#include<stdio.h>
int main()
{
    // %o is for octal number
    printf("Enter Decimal Number: ");
    int decimal;
    scanf("%d",&decimal);
    printf("Octal Number: %o\n\n",decimal);

    printf("Enter Octal Number: ");
    int octal;
    scanf("%o",&octal);
    printf("Octal Number: %d\n\n",octal);
}
