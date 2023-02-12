#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char c;
    cout<< "Enter character:";
    cin>>c;
   // c= toupper(c);
    c=tolower(c); // making all character to lowercase

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        cout<<"vowel";
    else
        cout<<"Consonant";
    getch();

}
