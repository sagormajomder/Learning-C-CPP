#include<stdio.h>
int main()
{
    char op;
    double a,b,sum;
    printf("input char: ");
    scanf("%c",&op);

    printf("input numbers: ");

    scanf("%lf %lf",&a,&b);

switch(op)
{
    case '+':
        sum=a+b;
        printf("%.3lf",sum);
        break;

case '-':
        sum=a-b;
        printf("%.3lf",sum);
        break;


case '*':
        sum=a*b;
        printf("%.3lf",sum);
        break;


 case '/':

        sum=a/b;
        printf("%.3lf",sum);
        break;


default:
        printf("Please input valid op");
}



}
