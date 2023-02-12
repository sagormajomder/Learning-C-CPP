//Given a year, Find is it leap year or not?
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d",&year);

    if(year%400==0)
        printf("Yes! %d is a Leap Year",year);

    else if(year%4==0 && year%100!=0)
        printf("Yes! %d is a Leap Year",year);

    else
        printf("Sorry! %d is not a Leap Year",year);

        return 0;

}
