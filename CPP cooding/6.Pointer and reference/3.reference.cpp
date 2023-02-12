#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a = 10;
    // refecrence means another name of the existing particular variable. thats why it doesn't occupy any extra memory
    int &r = a; // declare reference and keep in mind that declare of reference always need to initialize
    cout << a << endl;
    cout << r << endl;
    r++;
    cout << a << endl;
    cout << r << endl;
}