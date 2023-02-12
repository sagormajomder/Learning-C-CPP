#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1;
    cout<<"Enter number: ";
    cin>>num1;

    if(num1>0)
        cout<<"Positive";
    else if(num1<0)
        cout<<"negative";
    else
        cout<< "Zero";
    getch();
}
