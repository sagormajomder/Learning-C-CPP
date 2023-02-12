#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  cout<< "Enter How many multiple table you want: ";
  int num,i,j;
  cin>>num;

  for(i=1;i<=num;i++){

    for(j=1;j<=10;j++){
        cout<<i<<"*"<<j<<" = "<<i*j<<endl;
    }
    cout<<endl;

  }

    getch();
}

