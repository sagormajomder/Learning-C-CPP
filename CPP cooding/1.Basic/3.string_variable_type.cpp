#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // total letter in this string is = 14 with whitespace. but the terminator of character array is null character.
    // so with null character the total letter is : 15.

    char name[15] = "sagor Majomder";
    cout << "My name is: " << name << endl;
    getch();
}
