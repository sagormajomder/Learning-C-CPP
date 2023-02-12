#include<iostream>
#include<conio.h>
using namespace std;
/**

amra default parameter use korle setake main function er niche likhte parobo nah.

main function er niche likhte hole tokhn main funtion er vitor ei function ke parameter
soho call korte hobe jeta amra korte cassi nah.

*/

void display ( int a=10, int b=20) // default function cause it set default value in parameter
{

    cout << a << " " << b;
}

int main()
{

    display(); // will use default parameter value
    cout<<endl;
    display(25); // only b variable use default parameter value
    cout<<endl;
    display(60,75); // no variable use default parameter value
    getch();
}



