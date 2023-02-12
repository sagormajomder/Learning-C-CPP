#include <bits/stdc++.h>
using namespace std;

void func(string &s)
{
    s = "change string";
}
int main()
{
    string s = "asfsa";
    cout << s << endl;
    func(s);
    cout << s << endl;
}