#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    /*
    for(initialization; condition; operation)
    {

    }
    */
    for (int i = 0; i <= 10; cout << ++i << endl);

    cout << "Enter how many row you want: ";
    int num, i, j;
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    getch();
}
