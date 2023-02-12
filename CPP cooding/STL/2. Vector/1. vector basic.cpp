/**
    1. Alternative for arrays
    2. They are sequence Container
    3. they can have dynamic size

*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    /**
    Function Provided by Vector and its time complexity
        1. at -->O(1)
        2. front/back -->O(1)
        3. begin/end -->O(2)
        4. clear -->O(N)
        5. empty -->O(1)
        6. erase -->O(N+M) //M --> no of element deleted, N--> no of elements move
        7. insert -->O(N+M) //M --> no of element inserted, N--> no of elements move
        8. push_back/pop_back -->O(1)
        9. size/resize -->O(1)
        */
    vector<int> a; // vector is declare and it is empty array
    //push values
    a.push_back(1);
    a.push_back(2);

    // print - 1
    for (long long int i = 0;i < a.size();i++) // a.size() is from vector
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // print - 2
    for (auto x : a) // auto for any data_type
    {
        cout << x;
    }

    // pop values
    a.pop_back();

    cout << endl;
    //print-3
    //vector<int>::iterator it; instead of use only auto
    for (auto it = a.begin(); it != a.end();it++)
    {
        cout << *it; // iterator is a address. that's why use (*) for print value.
    }
    cout << endl;


    vector<int>b(5); // vector declare with size

    for (auto x : b)
    {
        cout << x;
    }
    cout << endl;

    vector<int>c(5, 1); // array size and initialize all value initially
    for (auto x : c)
    {
        cout << x;
    }
    cout << endl;

    if (c.empty()) {
        cout << "Array C is empty";
    }
    else
    {
        cout << "Array is not empty";
    }
    cout << endl;

    // to clear vector array
    c.clear();
    for (auto x : c)
    {
        cout << x;
    }
    cout << "Nothing will show any cause it C is Empty array vector" << endl;
    if (c.empty()) {
        cout << "Array C is empty";
    }
    else
    {
        cout << "Array is not empty";
    }
    cout << endl;

    vector<int> arr(10);
    //inserting value at particular index of the vector
    for (int i = 0;i < 10;i++)
    {
        //arr[i]=i+1; or insert like bellow for an specific index number
        arr.at(i) = i + 1;
    }
    cout << endl;
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    //Erase
    arr.erase(arr.begin() + 1);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    // arr.erase(arr.begin()+1,arr.begin()+6); // from erase to erase
    arr.erase(arr.begin() + 1, arr.end() - 2); // from erase to erase
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    //Insert
    arr.insert(arr.begin() + 1, 2); // insert value at a particular index
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    // Resize
    arr.resize(6);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << arr[arr.size() - 1]; // last element print
    cout << arr.back(); // last element print
    cout << arr.front(); // first element print

}
