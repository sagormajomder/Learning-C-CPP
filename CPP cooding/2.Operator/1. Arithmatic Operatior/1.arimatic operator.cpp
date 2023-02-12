#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // calculation priority
    cout << 7 / 2 << endl;
    cout << 7 / 2.0 << endl;
    cout << 'c' + 1 << endl; // char will convert in ASCII value and addition with 1
    // Double > float > long long int >long int > int > char
    // that means calculation will done by higher data type

    // division and multiplication has same power label. so it works from left to right
    cout << 7 / 2 * 3 << endl; // 9
    cout << 3 * 7 / 2 << endl; // 10

    // Addition and subtraction has same power label. so it works from left to right
    cout << 7 + 2 - 3 << endl; // 6
    cout << 3 - 7 + 2 << endl; //-2

    int num1, num2;
    cout << "Enter two Integer Number: ";
    cin >> num1 >> num2;

    int sum = num1 + num2;
    cout << "The sum is : " << sum << endl;

    int sub = num1 - num2;
    cout << "The Subtraction is : " << sub << endl;

    int mul = num1 * num2;
    cout << "The Multiple is : " << mul << endl;

    // first calculation then store.
    // so if we calculate in 'double' datatype numbers but we store in 'int' datatype variable then it will give us only int value though it was calculate double value
    // agian if we calculate in 'int' type value but store in 'double' type variable, the result is shown in 'int' type
    double div = (double)num1 / num2; // typecasting
    cout << "The Division is : " << div << endl;

    int rem = num1 % num2;
    cout << "The Remainder is : " << rem << endl;

    // we can't calculate remainder in float or double type Numbers

    getch();
}
