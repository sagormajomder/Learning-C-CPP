#include <iostream>
#include <conio.h>
using namespace std;

void displayArray(int num[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "Numbers are : " << num[i] << endl;
    }
}

int main()
{
    cout << endl
         << endl;
    cout << "=============Passing Array in Function================" << endl;

    int number[5] = {10, 20, 30, 40, 50};
    // array always pass by address
    // Only for competitive programming,If we need to pass an array in function, it is best to declare the array in global but for programming perpective, it is not best rule to declare array in global
    displayArray(number, 5);

    getch();
}
