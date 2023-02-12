#include<iostream>
#include<conio.h>
using namespace std;

void sum(int a, int b)
{
    int sum=a+b;
    cout<< "Sum is : " <<sum << endl;
    cout << "Normal sum" << endl;
    cout<<endl << endl;
}

void sum(double a, double b)
{
    double sum=a+b;
    cout<< "Sum is : " <<sum << endl;
    cout << "double sum" << endl;
    cout<<endl << endl;
}


void sum(int a, int b, int c)
{
    int sum=a+b+c;
    cout<< "Sum is : " <<sum << endl;
      cout << "Normal three variable sum" << endl;
      cout<<endl << endl;
}

int main()
{
    cout<< endl << endl;
    cout<< "=============Function Overloading================" << endl;
    sum(10,20);
    sum(10.5,20.3);
    sum(10,20,30);

    getch();

}
