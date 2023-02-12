#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 10, b = 20;
    cout << "a value: " << a << endl
         << "b value: " << b << endl;
    swap(&a, &b);
    cout << "After swap:" << endl;
    cout << "a value: " << a << endl
         << "b value: " << b << endl;
}