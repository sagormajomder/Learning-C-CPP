#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  cout<< "Enter last integer number of the series: ";
  int num,i,sum=0;
  cin>>num;

  for(i=1;i<=num;i++){
        sum=i+sum;
  }
  cout<< "The Total Sum is : "<<sum<<endl;

    getch();
}

