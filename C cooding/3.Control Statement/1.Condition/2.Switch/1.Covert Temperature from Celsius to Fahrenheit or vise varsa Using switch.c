#include<stdio.h>
int main()
{
int n,d,c,f;
printf("1. Farenhit to Celsius");
printf("2. Celsius to Farenhite");

scanf("%d",&n);

switch(n)
{
case 1:
    printf("Enter Farenhit Temparature: ");
    scanf("%d",&d);
    c=(d*5-160)/9;

    printf("%d",c);
    break;

case 2:
    printf("Enter Celcious Temparature: ");
    scanf("%d",&d);

    f=(d*9+160)/5;

    printf("%d",f);
break;
default:
    printf("Enter Correct value");

}
}
