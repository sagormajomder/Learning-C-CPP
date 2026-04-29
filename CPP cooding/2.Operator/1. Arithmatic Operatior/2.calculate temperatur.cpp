#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    double result;
    cout << "Enter Fahrenheit Temperature: ";
    cin >> num;
    result = ((double)5 / 9) * (num - 32);
    cout << "Celsius Temperature: " << result << endl;
}
