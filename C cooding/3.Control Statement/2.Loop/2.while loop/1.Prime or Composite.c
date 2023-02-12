#include<stdio.h>
int main()
{
    int n,i=2,j=0;
    scanf("%d",&n);

    while(i<n)
    {
        if(n%i==0)
        {
             j=1;
        break;

        }

        i++;
    }
    if(j==0)
        printf("Prime");
    else
        printf("Composit");
}
