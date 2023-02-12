#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n)
{
    if(n==1)
        return 1;
    else
    {
      return n*fact(n-1);
    }
}

int main()
{
    int num;
    cout<< "Enter which number's factorial you want: ";
    cin>>num;
    int sum = fact(num);
    cout<<sum;
    getch();
}
