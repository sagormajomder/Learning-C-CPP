#include<iostream>
#include<conio.h>
using namespace std;

template <class myTemplate>
myTemplate add ( myTemplate a, myTemplate b)
{
    return a+b;
}

int main()
{

    cout<< "Int type " <<add(10,15) <<endl;
    cout<< "double type " <<add(10.5,15.8) <<endl;


    getch();
}
