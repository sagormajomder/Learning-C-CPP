#include<iostream>
using namespace std;
int addition(int , int);
int main()
{
    int result= addition(15,20);
    cout<< "Result is: " << addition(15,20) << endl;
    cout<< "Result is: " << result << endl;
}
int addition(int a, int b)
{
    int sum=a+b;
    return sum;
}
