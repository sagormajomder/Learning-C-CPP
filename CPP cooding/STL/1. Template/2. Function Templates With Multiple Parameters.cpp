
#include <iostream>
#include <conio.h>
using namespace std;

template <class myTemplate1, class myTemplate2>
myTemplate1 add(myTemplate1 a, myTemplate2 b) /** return type hobe setai jeta function argument er je data type dekhate cai*/
{
    return a + b;
}

int main()
{

    cout << "Int type " << add(10, 15) << endl;
    cout << "double type " << add(10.5, 15.8) << endl;
    cout << "double type " << add(10, 15.8) << endl;
    cout << "double type " << add(10.5, 15) << endl;

    getch();
}
