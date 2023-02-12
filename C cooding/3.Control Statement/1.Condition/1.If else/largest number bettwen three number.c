/*Given three integers N1, N2 and N3,
Determine which one is the largest among them.
*/
#include<stdio.h>
int main()
{
    int N1,N2,N3;
    printf("Enter three interger value: ");
    scanf("%d %d %d",&N1,&N2,&N3);

    if(N1>N2 && N1>N3)
        printf("%d is the largest Number",N1);

    else if(N2>N1 && N2>N3)
        printf("%d is the largest Number",N2);

    else if(N3>N1 && N3>N2)
        printf("%d is the largest Number",N3);

    else
        printf("They are equal");
    return 0;
}
