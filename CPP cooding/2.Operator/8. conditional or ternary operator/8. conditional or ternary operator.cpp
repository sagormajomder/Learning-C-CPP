#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1=10,num2=20;

    /**
            condition ? true : False
    (num1<=num2) ? (cout<< "large is : "<< num2) : (cout<< "Large is: "<< num1;)
    */

    int max= (num1<num2) ? num2 : num1;

    cout<<max;

}
