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

    */

    cout << "How many Number you want to input: ";
    int num,i;
    cin>>num;
    int array[num];

    for(i=0; i<num; i++)
    {
        cin>>array[i];
    }

    for(i=0; i<num; i++)
    {
        cout << "Value is : "<< array[i]<< endl;
    }

    getch();

}
