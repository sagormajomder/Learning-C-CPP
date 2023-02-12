#include <iostream>
#include <conio.h>
using namespace std;
const int N = 1e3 + 10;
int c[N][N];
void array(int arr[], int n)
{
    arr[0] = 25; // change actual parameter
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void another_array(int b[])
{
    b[0] = 10;
}

void multiple_array()
{
    c[0][0] = 12;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    array(a, 5);
    cout << "Array Passing without size (only for 1D array)" << endl;
    int b[5] = {5, 6, 7, 8, 9};
    cout << "Before:" << b[0] << endl;
    another_array(b);
    cout << "After: " << b[0] << endl;
    cout << "Multiple array Passing by global array" << endl;
    c[0][0] = 15;
    cout << c[0][0] << endl;
    multiple_array();
    cout << c[0][0] << endl;
}
