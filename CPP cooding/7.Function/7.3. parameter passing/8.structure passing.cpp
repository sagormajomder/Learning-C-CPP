#include<iostream>
using namespace std;
struct Rectangular{
    int length;
    int breadth;

};

struct Test{
    int a[5];
    int n;

};

int area(struct Rectangular p){
    return p.length*p.breadth;

}

void fun(struct Test t1)
{
    cout<<t1.a[1]<<endl;
}

int main()
{
    struct Rectangular r={10,20};
    cout<<"Area is :"<<area(r)<<endl;

    struct Test t={{1,2,3,4,5},10};
    // structure can pass by value. Despite having array in this structure, it can do pass by value.
    fun(t);

}
