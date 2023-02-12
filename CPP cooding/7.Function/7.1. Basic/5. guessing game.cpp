#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
    cout<<"welcome to guessing game"<<endl<<endl;
    bool a=true;
    while(a)
    {
        int guess_number,random_number;

        cout<<"Enter a number between 1 to 10 :";
        cin>>guess_number;

        random_number=rand()%10 +1;

        if (random_number==guess_number)
        {

            cout<<"Yow won"<<endl;
            a=false;


        }
        else
        {
            cout<<"You lost . Please try again."<<endl<<"The random number was :"<<random_number<<endl;

        }
        cout<<endl;
    }



    getch();
}
