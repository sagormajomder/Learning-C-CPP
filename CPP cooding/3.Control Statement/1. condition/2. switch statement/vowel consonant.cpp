#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a Character : ";
    cin>>c;
    c=tolower(c);

    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"vowel";
        break;
    default:
        cout<<"Consonant";
    }
    getch();
}

