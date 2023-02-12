#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template <class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}
int main()
{
    Arithmetic<int> ar(10, 20);
    cout << "add: " << ar.add() << endl;
    cout << "sub: " << ar.sub() << endl;
    Arithmetic<double> ar1(10.5, 20.10);
    cout << "add: " << ar1.add() << endl;
    cout << "sub: " << ar1.sub() << endl;
}