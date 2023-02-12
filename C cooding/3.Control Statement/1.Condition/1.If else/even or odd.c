//Given a Number N, determine whether it’s an odd/even number?

#include<stdio.h>
int main()
{
    int N;
    printf("Enter a Number: ");
    scanf("%d",&N);

    if(N%2==0)
        printf("Even");
    else
        printf("Odd");
    return 0;

}
