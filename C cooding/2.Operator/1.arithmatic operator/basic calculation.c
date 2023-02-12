#include<stdio.h>
int main()
{
    // calculation priority
    int num1,num2;
    printf("Enter two Integer Number: ");
    scanf("%d %d",&num1,&num2);

    int sum=num1+num2;
    printf("The sum is : %d\n",sum);

    int sub=num1-num2;
    printf("The Subration is : %d\n",sub);
    int mul=num1*num2;
    printf("The Multiplication is : %d\n",mul);

// first calculation then store. so if we store in int datatype variable then it will give us only int value though it was calculate double value
    double div=(double) num1/num2; //typecasting
    printf("The Division is : %.3lf\n",div);


    int rem=num1%num2;
    printf("The Remailder is : %d\n",rem);

    //we can't calculate remainder in float or double type Numbers





}
