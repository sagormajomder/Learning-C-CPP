/**
    Function are two types.
        -Library Function [ toupper(), tolower() ]
        -User Defined Function
*/
#include<iostream>
#include<conio.h>
using namespace std;

/**
    void addition(int a, int b)
{

    int sum= a+b;
    cout<< "Sum is : " << sum <<endl;

}

*/

// If we want to use the function after main function, then we need to declare the function first.
void addition(int,int); //declare prototype function

int main()
{
    int num1,num2;
    cout<< "Enter First Number : ";
    cin>> num1;
    cout<< "Enter Second Number : ";
    cin>>num2;
    addition(num1,num2);

    getch();
}

void addition(int a, int b)
{

    int sum= a+b;
    cout<< "Sum is : " << sum <<endl;

}
