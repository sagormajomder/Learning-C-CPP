// এটা মূলত অন্য কোনো data type কে string এ কনভার্ট করার জন্য ব্যবহার হয়
// ঠিক একই ভাবে string কে অন্য data type এ কনভার্ট করার জন্য ব্যবহার হয়।
#include <iostream>
#include <sstream> // for stringstream object
using namespace std;
int main()
{
    cout << "Enter an integer value:";
    int input;
    cin >> input;
    //convert integer to string using sstringstream object
    stringstream sso;
    sso << input; // insert int to sso object
    string stringput;
    sso >> stringput; // sso object extract the string of 55

    cout << " The Integer Number: " << input << endl;
    cout << "The Sring form of integer number: " << stringput << endl;

    //convert string to integer using streamstring object
    stringstream so;
    string number="44";
    so << number;
    int num;
    so >> num;
    cout << endl<< "Integer format: "<< num+2<<endl;

    return 0;
}
