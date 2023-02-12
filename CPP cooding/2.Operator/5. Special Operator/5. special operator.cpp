#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    /**
     Special Operator
     1. size of( data type / expression)
     2. comma (,)
     3. pointer (*)
    */
    int i;
    float f;
    double d;
    char c;
    char ch[20];

    cout<< "Size of Operator" << endl;
    /**
    size will show in bytes
    */
    cout<< sizeof(i) <<endl;
    cout<< sizeof(f) <<endl;
    cout<< sizeof(d) <<endl;
    cout<< sizeof(c) <<endl;
    cout<< sizeof(ch) <<endl;

    cout<< "Comma Operator" << endl;

    int a,b,sum;
    sum=(a=10, b=10,sum=a+b);
    cout<< sum << endl;


   getch();
}
