#include <bits/stdc++.h>
using namespace std;

int main()
{
  //* string
  char c[15];
  cout << "Enter character array: ";
  cin.getline(c, sizeof(c));
  cout << "The String is : " << c << endl;

  //* Integer Number
  int a;
  cout << "Enter an Integer Number: ";
  cin >> a;
  cout << "The Number is : " << a << endl;

  //* float
  float f;
  cout << "Enter an Float Number: ";
  cin >> f;
  cout << "The Number is : " << f << endl;

  //* double
  double d;
  cout << "Enter an Double Number: ";
  cin >> d;
  cout << "The Number is : " << d << endl;

  //* char
  char ch;
  cout << "Enter an Character : ";
  cin >> ch;
  cout << "The Character is : " << ch << " " << "ASCII value: " << (int)ch << endl;

  //* String Input with string class object
  // it doesn't work as the last statement. it should in the first statement of the code.

  string str4;
  cout << "Enter String: ";
  getline(cin, str4);
  cout << str4 << endl;

  //* multiple input

  /**
   * ধরি cin যদি দুই বা ততোধিক input নেবার জন্য কাজ করে তাহলে প্রথম input নেবার সময় যখন নতুন লাইন(\n) / space পাবে না ততখন পর্যন্ত প্রথম input এর জন্য cin কাজ করে যাবে।
   * কিন্তু যখনই নতুন লাইন(\n) / space পাবে তখনই  প্রথম input এর জন্য cin কাজ করা বন্ধ করে দ্বিতীয় input নেবার জন্য cin কাজ করবে এবং দ্বিতীয় input এর আগে যতই space/(\n) থাকুক না কেন সেগুলো বাদ দিয়ে নির্দিষ্ট টাইপের ডেটা পেলেই দ্বিতীয় input নিবার জন্য কাজ করবে।
   * মনে রাখতে হবে, char যখন input নিবে তখন একসাথে (যেমন abc) অনেক char থাকলেও কেবলমাত্র একটি char input নিবে এবং পরবর্তী char কে দ্বিতীয় input হিসেবে নিবে।
   */
  int num1, num2, sum;
  cout << "Enter Two Integer Number: ";
  cin >> num1 >> num2;
  sum = num1 + num2;
  cout << "Sum is : " << sum << endl;

  char d, e;

  cin >> d >> e; // take AB and CD // abc

  cout << "character 1: " << d << " " << "character 2: " << e << endl; // A B // a b

  return 0;
}
