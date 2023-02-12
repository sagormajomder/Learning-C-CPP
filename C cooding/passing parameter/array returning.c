#include<stdio.h>
#include <stdlib.h>
int* fun(int n)
{
    int *p;
    p=(int*)malloc(n*sizeof(int));
    return (p);
}

int main()
{
  int *a;
  printf(&a);
}
