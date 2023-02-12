#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    int last_digit = 0;
    while (n) {
        last_digit = last_digit + n % 10;
        n = n / 10;
    }
    return last_digit;

}
int main()
{
    int n1, n2;
    cout << "Enter Two Numbers: ";
    cin >> n1 >> n2;
    cout << "Total Sum is: " << sum(n1) + sum(n2) << endl;

}