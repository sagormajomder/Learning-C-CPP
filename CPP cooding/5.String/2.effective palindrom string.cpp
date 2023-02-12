#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string s2=str;
    int equal=0;
    for(int i=0; i<str.size()/2;++i)
    {
        if(str[i]==s2[s2.size()-1-i])
        {
            equal=1;
        }
        else{
            equal=0;
        }
    }
    if(equal)
    {
        cout<<"yes";
    }else{
        cout<<"No";
    }
}
