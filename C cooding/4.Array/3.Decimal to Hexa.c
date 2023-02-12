#include<stdio.h>
int main()
{
    int d;
    printf("Enter a Decimal Number: ");
    scanf("%d",&d);
    int i=0,j,re[50],bi[50];
    while(d!=0)
    {
        re[i]=d%16;
        if(re[i]>=10)// we know if the remainder is bigger or equal to 10 then it will repeat A=10,b=11,c=12,d=13,e=14,f=15
            re[i]=55+re[i];//as we know the aschii value of A is 65.
        d=d/16;
        i++;
    }
    printf("hexadecimal is : ");
    for(j=0,i=i-1;i>=0;i--)
    {
        bi[j]=re[i];
        if(re[i]>=10)
            printf("%c ",bi[j]);
        else
            printf("%d ",bi[j]);

    }
}
