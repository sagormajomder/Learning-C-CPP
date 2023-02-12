#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter two number: ";
    cin>>num1>>num2;

    if(num1>num2){
        cout<< "Large is : "<< num1 <<endl;
        cout<< "Small is : "<< num2 <<endl;
    }
    else if(num1<num2){
        cout<< "Large is : "<< num2 <<endl;
        cout<< "Small is : "<< num1 <<endl;
    }else
        cout<< "They are Equal";
    getch();
}
