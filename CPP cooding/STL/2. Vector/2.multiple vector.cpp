#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1[10][5];
    int c=10;
    //First
    vector<vector<int> > mat(10,vector<int>(5));
    for(int i=0;i<mat.size();i++){
        for(int j=0; j<mat[i].size();j++)
        {
            mat[i][j]=c++;
        }
    }

    for(int i=0;i<mat.size();i++){
        for(int j=0; j<mat[i].size();j++)
        {
           cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    //Second
    vector<vector<int> > arr;
    vector<int> x(5);
    arr.push_back(x);
    vector<int> y(2,1);
    arr.push_back(y);

     for(int i=0;i<arr.size();i++){
        for(int j=0; j<arr[i].size();j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
