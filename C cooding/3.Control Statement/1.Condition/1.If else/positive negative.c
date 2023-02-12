//Given a number N, Determine whether it’s positive/negative?

#include<stdio.h>
int main()
{
    double N;
    printf("Enter an Number : ");
    scanf("%lf",&N);

    if(N>0)
        printf("Positive");
    else
        printf("Negative");

    return 0;

}
