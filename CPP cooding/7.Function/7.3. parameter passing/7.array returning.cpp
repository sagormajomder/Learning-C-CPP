#include <iostream>
#include <conio.h>
using namespace std;
int *fun(int n)
{
  int *p;
  p = new int[n];
  return p;
}

int main()
{
  int *a;
  a = fun(5);

  cout << *a << endl;
}
