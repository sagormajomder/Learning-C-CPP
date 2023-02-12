#include<iostream>
using namespace std;
int main(){
    int num,row,col;
    cout<< "How many Lines you want:";
    cin>>num;
    for(row=1;row<=num;row++){
        for(col=1;col<=row;col++){
            cout<< col << " ";
        }
        cout<< endl;
    }

}
