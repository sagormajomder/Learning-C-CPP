#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int num;
    cout << "Enter the number: ";
    cin >> num;
    int last_disit, sum;

    // if (num % 3 == 0)
    //     cout << "Number is Divided by 3" << endl;
    // else
    //     cout << "Number is not Divided by 3" << endl;

    while (num > 0)
    {
        last_disit = num % 10;
        sum = sum + last_disit;
        num = num / 10;
    }
    if (sum % 3 == 0)
    {
        cout << "Number is Divided by 3" << endl;
    }
    else
        cout << "Number is not Divided by 3" << endl;
}