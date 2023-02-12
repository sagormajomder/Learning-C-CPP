#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter Any Number: ";
    long long int num;
    cin >> num;
    int last_digit;
    last_digit = num % 10;

    if (last_digit == 5 || last_digit == 0)
    {
        cout << "The Number is divided by 5";
    }
    else
        cout << "The Number is not divided by 5";

    // if (num % 5 == 0)
    // {
    //     cout << "The Number is divided by 5";
    // }
    // else
    //     cout << "The Number is not divided by 5";
}