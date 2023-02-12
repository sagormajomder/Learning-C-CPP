#include<stdio.h>
int main()
{
    int i=1,n,fact=1;
    scanf("%d",&n);
    while(n>=i)
    {
        fact=fact*i;
        i++;
    }
    printf("%d\n",fact);
    return 0;
}
