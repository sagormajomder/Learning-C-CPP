#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
    int num;
    double result;
    cout<< "Enter Farenheit Temperature: ";
    cin>>num;
    result= ((double)5/9)*(num-32);
    cout<<"Celcious Temperature: "<< result<<endl;
    getch();
}
