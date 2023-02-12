#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    /** datatypes
        1.char (in c++, 128 characters are exist)
        2.int ( -10^9 < int < 10^9 )
        3.long int ( -10^12 < long int < 10^12 )
        4.long long or long long int ( -10^18 < long long int < 10^18 )
        5.float
        6.double

        note: float and double has big range for storing data but they don't give exact output.
        they give approximate output for huge data calculation.
    */

    //    Assigning Variable value with three different style
    int variable_1 = 5; // called copy initialization
    // called direct initialization and For more complicated types, direct initialization tends to be more efficient than copy initialization.
    int variable_2(6);
    // called brace initialization / uniform initialization / list initialization
    // Favor initialization using braces whenever possible.
    int variable_3{5};
    int variable_4 = {11};
    // brace initialization এর brace খালি রাখলে এটা data type অনুযায়ী 0 / empty ভ্যালু assgin করে।
    //  এই format এর brace initialization মূলত তখনই ব্যবহার করি
    //যখন আমরা variable টাই temporary value assign করতে চাই
    //কেননা পরবর্তীতে অন্য value এটাকে replace করবে
    int variable_5{}; // caled value initialization
    cout << "Variable 1: " << variable_1 << endl
         << "Variable 2: " << variable_2 << endl
         << "Variable 3: " << variable_3 << endl
         << "Variable 4: " << variable_4 << endl
         << "Variable 5: " << variable_5 << endl;
    cout << "Enter Variable 5 Value: ";
    cin >> variable_5;
    cout << "Variable 5 after cin: " << variable_5 << endl;

    // integer value
    int a = 10,
        b = 20;
    cout << a << endl;
    cout << "Num 1 is : " << a << endl
         << "Num 2 is : " << b << endl;

    // long int

    // char value
    char ch = 'c';
    cout << "character is : " << ch << endl;

    // float
    float f = 10.123456789;
    cout << "float is : " << f << endl;

    // double
    double d = 10.123456789;
    cout << "double is : " << d << endl;

    // boolean
    bool bol = true;
    // output will be in numbers
    cout << "The Boolean Value is : " << bol << endl;

    // boolean data type uses

    bool x = 0;     // false and print 0
    bool y = 100;   // true and print 1
    bool z = 15.75; // true and print 1
    bool u = -100;  // true and print 1

    cout << "The Boolean Value of x : " << x << "\n"
         << "The Boolean Value of y : " << y << "\n"
         << "The Boolean Value of z : " << z << "\n"
                                                "The Boolean Value of u : "
         << u << "\n"
         << endl;

    // 2nd boolean example

    int x1 = 10, x2 = 20, m = 2;
    bool b1, b2;
    b1 = x1 == x2; // false

    b2 = x1 < x2; // true

    cout << "b1 is = " << b1 << "\n";
    cout << "b2 is = " << b2 << "\n";

    bool b3 = true;

    if (b3)
        cout << "Yes"
             << "\t and Value is: " << b3 << "\n";
    else
        cout << "No"
             << "\t Value is: " << b3 << "\n";

    int x3 = false + 5 * m - b3; // 0+(5*2)-1
    cout << x3 << endl;

    // overflow concept
    int num1 = 100000; // 10^5
    int num2 = 100000; // 10^5
    int num3 = num1 * num2;
    cout << "Number 3 is: " << num3 << endl; // it cause 10^5*10^5 = 10^10 which create overflow as int datatype rage is from -10^9 to 10^9

    // int mx = INT_MAX; // ( INT_MIN < int < INT_MAX ) if we add +1 in this range it will back its start value.
    int mx = INT_MAX + 1;
    cout << "Max Int: " << mx << endl;

    /**
    long long int num4=100000; //10^5
    long long int num5=100000; //10^5
    long long int num6=num4*num5;
    cout<<"Number 6 is: " <<num6 <<endl;
    */

    int num4 = 100000; // 10^5
    int num5 = 100000; // 10^5
    long long int num6 = num4 * 1LL * num5;
    cout << "Number 6 is: " << num6 << endl;

    getch();
}
