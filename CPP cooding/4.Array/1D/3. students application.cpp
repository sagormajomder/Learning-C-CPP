#include<iostream>
using namespace std;
int main()
{
    int num,i,sum=0;
    cout<< "How many Students:";
    cin>>num;
    int student[num];
    for(i=0;i<num;i++){
        cin >> student[i];
        sum+=student[i];
    }
    cout<< "Total Marks : "<<sum<<endl;
    cout<< "Total Average : "<<(double)sum/num<<endl;

    // maximum numbers
    int max = student[0];
    for(i=0;i<num;i++){
        if(max<student[i]){
            max = student[i];
        }
    }

    cout<< "Max Result is: "<<max<<endl;

    // minimum numbers
    int min = student[0];
    for(i=0;i<num;i++){
        if(min>student[i]){
            min = student[i];
        }
    }
    cout<< "Min Result is: "<<min<<endl;
}
