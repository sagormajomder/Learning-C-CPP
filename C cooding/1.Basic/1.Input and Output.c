#include<stdio.h>
#include<stdbool.h> // for use of bool
int main()
{
    int num1;
    long int another;
    long long int lnum; // Or use only long long
    float num2;
    double num3;
    char name;
    bool a=false;


    printf("Boolean is: %d\n\n",a); // 0->false and 1 or any other number->true

    printf("Enter a Character:");
    scanf("%c",&name);
    printf("Character: %c\n\n",name);

    printf("Enter an Integer Number:");
    scanf("%d",&num1);
    printf("Integer Number: %d\n\n",num1);

    printf("Enter an Long Number:");
    scanf("%ld",&another);
    printf("Long Number: %ld\n\n",another);

    printf("Enter an Long long Number:");
    scanf("%lld",&lnum);
    printf("Long Long Number: %lld\n\n",lnum);

    printf("Enter a Float Number:");
    scanf("%f",&num2);
    printf("Float Number: %.2f\n\n",num2);

    printf("Enter a Double Number:");
    scanf("%lf",&num3);
    printf("Double Number: %.3lf\n\n",num3);


}
