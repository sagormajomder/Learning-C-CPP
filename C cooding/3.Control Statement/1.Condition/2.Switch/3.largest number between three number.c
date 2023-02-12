#include<stdio.h>
int main()
{
    int n1,n2,n3,a,b;
    printf("Enter three interger value: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    a=(n1>n2 && n1>n3)?1:2;

    switch(a)
    {
    case 1:
        printf("%d",a);
        break;
    case 2:
        b=(n2>n3)?n2:n3;
        printf("%d",b);
        break;
    }

    return 0;
}
