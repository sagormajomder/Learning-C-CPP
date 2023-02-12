#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Starting point
    string str = "Hello";
    cout << str << endl;
    string str2;
    cin >> str2;
    string result = str + str2; // string concatination
    cout << result << endl;

    // Equality Checking
    if (str == str2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    // assign  character at a specific index of a string and change the actual string
    str[0] = 'h';
    cout << str << endl;

    // String Size
    cout << str.size() << endl;

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << endl;
    }
    cout << endl;

    // multiple string
    string str3, str4;
    cin >> str3 >> str4;
    cout << str3 << " " << str4 << endl;

    /**ধরি cin যদি দুইটা int টাইপের input নেবার জন্য কাজ করে তাহলে প্রথম input নেবার সময় যতক্ষন নতুন লাইন(\n) / space পাবে না ততখন পর্যন্ত প্রথম input এর জন্য cin কাজ করে যাবে কিন্তু যখনই নতুন লাইন(\n) / space পাবে তখনই  প্রথম input এর জন্য cin কাজ করা বন্ধ করে দ্বিতীয় input নেবার জন্য cin কাজ করবে এবং দ্বিতীয় input নেবার সময় আগে যতই space/(\n) থাকুক না কেন সেগুলো বাদ দিয়ে int পেলেই দ্বিতীয় input নিবার জন্য কাজ করবে।
     */
    // মনে রাখতে হবে, char যখন input নিবে তখন পাশাপাশি অনেক char থাকলেও কেবলমাত্র একটি char input নিবে এবং পরে দ্বিতীয় input নেবার জন্য কাজ করবে।

    // getline() একটি লাইনকে সম্পূর্ন input হিসেবে নেয় এবং কার্সর যেখানে থাকে সেখান থেকে input নেওয়া শুরু করে। সেই লাইনে যত space থাকবে সেগুলোও input হিসেবে নিবে।
    // cin ১ম input নেবার সময় space পেয়ে বন্ধ হয়ে যাবে কিন্তু মাউসের কার্সর new line এ না গিয়ে ঐ লাইনেই পূর্বের input নেওয়া char এর ঠিক পরেই থাকবে।
    //ঔদিকে তখন getline() মাউস কার্সরের সামনে empty string পাবে  এবং সেটাকে input হিসেবে নিবে এবং তারপর কাজ করা বন্ধ করে দ্বিতীয় input এর জন্য কাজ করবে।
    // যাতে cin এর পরে  অবশিষ্ট থাকা empty string, input হিসেবে না নেয় মানে মাউস কার্সরকে নতুন লাইনে shift করার জন্য getline() এর পূর্বেই আমাদের cin.ignore() ব্যবহার করতে হবে।

    // মনে রাখতে হবে, উপরে getline() নিয়ে যা বলেছি সেটা শুধু concept টা বুজার জন্য। আসলে internally এমন কিছুই হয় না।  যেটা হয় সেটা হলো string buffer.

    cout << "how many times you want to input:";
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str5;
        cout << "Input Many words: ";
        // input multiple word with space in one string
        // it doesn't take any input when it isn't first input statement of any block.
        getline(cin, str5);
        cout << str5 << endl;
    }

    // string reverse
    string str6, str_reverse;
    cin >> str6;
    for (int i = str6.size() - 1; i >= 0; --i)
    {

        // string এ character অ্যাড করা উচিত না। এটা time complexity বাড়ায়। তাই এটা করা যাবে না।
        // str_reverse = str_reverse + str6[i];
        str_reverse.push_back(str6[i]); // এটা current string এর শেষে character কে জোড়া লাগিয়ে দিবে।
    }
    cout << str_reverse << endl;
    // palindrome check
    if (str == str_reverse)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    // Dealing With Large Number which is  out of range of int
    string large_n;
    cin >> large_n;
    // large_n[large_n.size() - 1] - '0' ==> এটা number এর শেষ char এর একটি ASCII value দিবে যেটাকে আমরা decimal হিসেবে last_digit এ স্টোর করছি।
    int last_digit = large_n[large_n.size() - 1] - '0';
    cout << last_digit;
}
