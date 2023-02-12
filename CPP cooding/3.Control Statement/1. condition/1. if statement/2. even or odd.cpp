#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1;
    cout << "Enter number: ";
    cin >> num1;

    if (num1 % 2 == 0)
        cout << "Even";
    else
        cout << "ODD";
    getch();
}
