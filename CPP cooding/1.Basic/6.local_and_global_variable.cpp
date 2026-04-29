#include <bits/stdc++.h>
using namespace std;

int x = 10; // global variable

int main()
{
    int x = 50;          // local variable
    cout << x << endl;   // print local variable value
    cout << ::x << endl; // print global variable value bcz scope resolution (::)

    ::x = 20; // change global variable value;
    cout << ::x << endl;
    cout << x << endl;
}
