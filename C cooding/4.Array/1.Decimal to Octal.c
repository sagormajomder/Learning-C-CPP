#include<stdio.h>
int main()
{
    int d;
    printf("Enter a Decimal Number: ");
    scanf("%d",&d);
    int i=0,j,re[50],bi[50];
    while(d!=0)
    {
        re[i]=d%8;
        d=d/8;
        i++;
    }
    printf("Octal is : ");
    for(j=0,i=i-1;i>=0;i--)
    {
        bi[j]=re[i];
        printf("%d ",bi[j]);

    }

}
