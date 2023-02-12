#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    /**
     * মনে রাখতে হবে, pointer এর সাইজ সবসময় int datatype এর সাইজের সমান হবে।
     * pointer ব্যবহার করার অনেকগুলো কারনগুলোর একটি হলো main memory এর heap অংশকে access করা বা external resource কে ব্যবহার করা। এটাকে parameter passing এর জন্যও ব্যবহার করা হয়।
        Declare : (data_type) *(variable_Name); example: int *p;
        symbol:
        ===========
        & --> used to get the address of the variable
        * --> used to get the value of the variable
        *p--> called it "value at p's containing address"
     */

    int x = 5;
    int *p; // pointer variable declare
    p = &x; // store address value of x to p

    cout << "Value of X is: " << x << endl;
    cout << "Address of Variable X is: " << &x << endl;
    cout << "Value of P(Address of Variable X): " << p << endl;
    cout << "Value at P's contain address: " << *p << endl;

    /**
     * যখন আমরা অ্যারে ডিক্লেয়ার করি, তখন অ্যারের variable টি নিজেই একটা pointer.
     * এজন্য শুধু variable টি প্রিন্ট করলে আমরা array variable এর address পেয়ে যাবো।
     * তাই নিচের a, &a[0] একই হবে
     * কিন্তু যদি *a অথবা (variable[0]) প্রিন্ট করি তাহলে zero index এর ভ্যালু প্রিন্ট হবে।
     * যদি  a+1 করি, তাহলে সেটা পরের index, a[1] এর address কে point করবে।
     */
    int a[3] = {1, 2, 3};
    cout << "array variable address: " << a << endl;
    cout << "array's zero index address: " << &a[0] << endl;
    cout << "array's zero index contain value: " << *a << endl;
    cout << "array's zero index contain value: " << a[0] << endl;

    cout << "after Addition: " << endl;
    cout << "array first index address: " << a + 1 << endl;
    cout << "array's first index address: " << &a[1] << endl;
    cout << "array's first index contain value: " << *(a + 1) << endl;
    cout << "array's first index contain value: " << a[1] << endl
         << endl
         << endl;

    // Double Pointer
    // Declare : (data_type) **(variable_Name); example: int **p;

    x = 4;
    int *fp;
    fp = &x; // x এর address fP তে
    int **dp;
    dp = &fp; // fp এর address dP তে

    cout << "Value of X: " << x << endl;
    cout << "Value at fp's contain address(Value of X): " << *fp << endl;
    cout << "Address of X: " << &x << endl;
    cout << "Value of fp(Address of X): " << fp << endl;
    cout << "Value at dp's contain address(Value of fp): " << *dp << endl;
    cout << "address of fp: " << &fp << endl;
    cout << "Value of dp: " << dp << endl;
    cout << "Value of X using double pointer: " << **dp << endl;
    **dp = 10;
    cout << "Value of X: " << x << endl;

    // creating and accessing heap memory
    int *outP;
    cout << &outP << endl;
    outP = new int[5]; // creating an array in heap memory
    cout << "Heap array zero index address: " << outP << endl;
    outP[0] = 5;
    cout << "Heap array zero index value: " << *outP << endl;
    // destroy heap memory and depoint the pointer
    delete[] outP;
    outP = NULL;
    cout << "Heap array zero index address: " << *outP << endl;
}
