#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    float num1, num2;
    cout << "Enter two Integer Number: ";
    cin >> num1 >> num2;

    cout << "========================ShowPoint=========================" << endl;

    cout << showpoint; // for showing of float point and after writing this, under all the code show point numbers.

    float sum = num1 + num2;
    cout << "The sum is : " << sum << endl;

    float sub = num1 - num2;
    cout << "The Subtraction is : " << sub << endl;

    float mul = num1 * num2;
    cout << "The Multiple is : " << mul << endl;

    double div = (double)num1 / num2;
    cout << "The Division is : " << div << endl;

    cout << "========================NoShowPoint=========================" << endl;

    // for not showing of float point and after writing this, under all the code doesn't show any point numbers
    // until it gets showpoint code.
    cout << noshowpoint;

    cout << "The sum is : " << sum << endl;

    // cout<<showpoint; // for showing of float point
    cout << "The Subtraction is : " << sub << endl;

    cout << "The Multiple is : " << mul << endl;

    cout << "The Division is : " << div << endl;

    // float rem=num1%num2; we can't calculate remainder in float or double type Numbers

    // cout << "The Remainder is : " <<rem<<endl;

    cout << "========================SetPrecision=========================" << endl;

    // include <iomanip> header file
    cout << setprecision(5); // if we don't use cout<<fixed, then it count start from beggining position of the number

    cout << "The sum is : " << sum << endl;
    cout << "The Subtraction is : " << sub << endl;

    cout << "The Multiple is : " << mul << endl;

    cout << "The Division is : " << div << endl;

    cout << "========================SetPrecision and Fixed=========================" << endl;

    // include <iomanip> header file
    cout << fixed;           // help to setprecision, count start after point. It also help for not showing output in scientific notation like 1e2 etc
    cout << setprecision(2); // if we don't use cout<<fixed, then it count start from beggining position of the number
    cout << "The sum is : " << sum << endl;
    cout << "The Subtraction is : " << sub << endl;

    cout << "The Multiple is : " << mul << endl;

    cout << "The Division is : " << div << endl;

    cout << "========================SetW=========================" << endl;

    // setW er vitor joto number dibo seta toto tuku output e character field jayga nibe

    cout << setw(20) << "The sum is : " << sum << endl;
    cout << setw(20) << "The Sub is : " << sub << endl;
    cout << setw(20) << "The Multiple is : " << mul << endl;
    cout << setw(20) << "The Division is : " << div << endl;

    getch();
}
