#include <bits/stdc++.h>
using namespace std;

int main()
{
    /**
        Unary operator always works with one variable.
        1. " + " --> Unary Plus
        2. " - " --> Unary Minus
        3. " ++ " --> Increment
        4. " -- " --> Decrement

    */
    int x = 10, result, y;

    result = +x; // unary plus x

    cout << "unary plus x : " << result << endl;

    result = -x; // unary minus x

    cout << "unary minus x :" << result << endl;

    x = 3;
    cout << "prefix increment" << endl;
    y = ++x;
    cout << y << endl; // y=4
    cout << x << endl; // x=4

    cout << "postfix increment" << endl;
    y = x++;
    cout << y << endl; // y=4
    cout << x << endl; // x=5

    cout << "prefix decrement" << endl;
    y = --x;
    cout << y << endl; // y=4
    cout << x << endl; // x=4

    cout << "postfix decrement" << endl;
    y = x--;
    cout << y << endl; // y=4
    cout << x << endl; // x=3

    return 0;
}
