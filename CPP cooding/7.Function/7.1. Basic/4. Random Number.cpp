#include<iostream>
#include<stdlib.h> // must use for rand() funcion
using namespace std;
int main()
{
    int randomNumber;
    for(int i=0; i<5;i++){
        randomNumber = rand()% 5+ 1;
    cout<< "Random Number : " << randomNumber<<endl;
    }

}
