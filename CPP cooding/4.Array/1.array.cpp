#include <bits/stdc++.h>
using namespace std;
const int num = 1e7;
int a[num];
int main()
{
    // locally array variable er size linit হলো  10^5. এটার উপরে locally array variable size declare করা যাবে না।
    // নিচের array variable এর সাইজ 10^7 এর order. তাই সেটা কোনো output দিবে না এবং error show করবে।
    // int n = 1e7;
    // globaly array size declare করতে হলে সেটা অবশ্যই const variable হতে হবে
    // কিন্তু যদি globally array এবং array size declare করি তাহলে 10^7 কাজ করবে কেননা সেটার size limit হলো 10^7 এর order.
    /**
     * এটা output দেখাবে কেননা size হলো 10^5.
     *int num = 2e5;
     int a[num];
    */
    int array[2] = {1, 2};
    a[num - 1] = 7;
    cout << a[num - 1] << endl;
    // For Global Array
    // int array[num];
    // array[num - 1] = 10;
    // cout << array[num - 1] << endl;
}