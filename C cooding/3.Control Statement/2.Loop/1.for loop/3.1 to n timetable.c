#include<stdio.h>
int main()
{
    int i,j,n,p=0,m=1;
    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            p=p+m;
            printf("%d * %d = %d\n",i,j,p);

        }
        p=0;
        ++m;
        printf("\n");
    }

return 0;

}
