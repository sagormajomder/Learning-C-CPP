#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    /**
    Bitwise AND = " & "
    Bitwise OR = " | "
    Bitwise EXOR = " ^ "
    Bitwise shift right ( divided by 2) = " >> "
    Bitwise shift left (multiple by 2) = " << "
    Bitwise NOT = " ` " (called Backtik)

    */

    cout<< "Binary AND"<<endl;

    int a=32,b=12,c;

    c = a & b;
    cout << c << endl;

    cout<< "Binary OR"<<endl;

    c=a | b;
    cout << c << endl;

     cout<< "Binary EXOR"<<endl;

     c= a ^ b;
    cout << c << endl;


    cout<< "Binary right shift"<<endl;

    c = a >> 3; // a will divided by 2 in three times
    cout << c <<endl; // c = 4

    cout<< "Binary left shift"<<endl;

    c= c << 3; //c=4 multiple by 2 in three times
    cout << c <<endl;



    getch();

}
