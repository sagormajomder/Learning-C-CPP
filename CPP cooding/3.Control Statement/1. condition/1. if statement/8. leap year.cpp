#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int year;
    cout<<"Enter year: ";
    cin>>year;
             /**
                 if(year%4==0 && year%100!=0)
                        cout<<"Leap Year";
                 else if(year%400)
                        cout<<"Leap Year";
            */
    if( (year%4==0 && year%100!=0) || year%400 )
        cout<<"Leap Year";
    else
        cout<< "Not Leap Year";
    getch();
}
