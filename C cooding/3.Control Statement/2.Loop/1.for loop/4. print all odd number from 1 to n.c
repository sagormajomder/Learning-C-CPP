#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter any integer number  = ");
    scanf("%d",&n);

    printf("Odd = ");

    for(i=1; i<=n;i++)
        {
            if(i%2!=0)
            {
             printf("%d ",i);
            }
}
    return 0;

}
