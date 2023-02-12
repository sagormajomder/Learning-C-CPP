#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<< "Enter Your Marks: ";
    cin>> num;
    if(num > 100 || num < 0)
    {
        cout<< "Invalid Marks";
    }
    else if(num>32)
    {
        if(num>=80)
        {
            cout<< "A+";
        }
        else if(num>=70)
            cout<<"A";
        else if(num>=60)
            cout<< "B";
        else if(num>=50)
            cout<< "B-";

        else if(num>=40)
            cout<< "C";
        else if (num>=33) // we can't use only 'else' in inner if statement
            cout<< "D";
    }
    else
        cout<< "Fail";

}

