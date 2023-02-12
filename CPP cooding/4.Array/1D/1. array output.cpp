#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    /**
        1D Array Declare & initialize
        ---------------------------------
        int marks[5] ={1,2,3,4,5};
        or,
        int marks[]= {1,2,3,4,5}; -->auto calculate size

        int array[5]={10,20,30,40,50};
        */
    int array[] = { 10,20,30,40,50 };

    int i;
    for (i = 0;i < 5;i++)
    {
        cout << array[i] << " ";
    }

    getch();
}
