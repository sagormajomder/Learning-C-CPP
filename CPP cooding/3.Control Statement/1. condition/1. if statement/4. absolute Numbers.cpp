#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter an Negative Number: ";
    cin>> num;
    if(num<0){
        cout<<"Absolute Value is: "<<(-num)<< endl;
    }else{
        cout<< "The Number is Positive";
    }
}
