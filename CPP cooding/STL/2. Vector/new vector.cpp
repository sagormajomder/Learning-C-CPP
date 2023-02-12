#include <iostream>
#include <vector>
using namespace std;
int main()
{
  //*********************************
  // Vector Initialize
  //*********************************
  vector<int> vec;

  //*********************************
  // Vector Push Back
  //*********************************
  vec.push_back(5);
  vec.push_back(11);
  vec.push_back(12);

  //*********************************
  // Vector output
  //*********************************
  cout << "Vector Elements: ";
  cout << vec[0] << " ";
  cout << vec[1] << " ";

  cout << vec.at(2) << " ";

  //*********************************
  // Vector out of rage print
  //*********************************
  cout << vec[10] << endl; // print garbase value
  // cout << vec.at(10) << endl;  show error or halt the program

  //*********************************
  // Vector Size
  //*********************************
  cout << "Vector size: ";
  cout << vec.size() << endl;

  //*********************************
  // Vector Print
  //*********************************
  cout << "Vector Elements: ";
  for (int i = 0; i < vec.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec.at(i) << " ";
  }
  cout << endl;

  //*********************************
  // Vector first element print
  //*********************************
  cout << vec.front() << endl;

  //*********************************
  // Vector last element print
  //*********************************
  cout << vec.back() << endl;

  //*********************************
  // Vector full clear
  //*********************************
  cout << "Before clear Vector size: ";
  cout << vec.size() << endl;
  vec.clear();
  cout << "After clear Vector size: ";
  cout << vec.size() << endl;

  //*********************************
  // Vector Empty
  //*********************************
  if (vec.empty())
    cout << "Vector Empty" << endl;
  else
    cout << "Vector not Empty" << endl;

  // vector element input
  vec.push_back(5);
  vec.push_back(11);
  vec.push_back(12);

  // vector print
  cout << "Before Pop Back Vector Elements: ";
  for (int i = 0; i < vec.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec.at(i) << " ";
  }
  cout << endl;

  //*********************************
  // Vector remove last element
  //*********************************
  vec.pop_back();

  // vector print
  cout << "After Pop Back Vector Elements: ";
  for (int i = 0; i < vec.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec.at(i) << " ";
  }
  cout << endl;

  // vector element input
  vec.push_back(15);
  vec.push_back(200);
  vec.push_back(100);
  vec.push_back(30);
  vec.push_back(20);

  cout << "Before Erase Vector Elements: ";
  for (int i = 0; i < vec.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec.at(i) << " ";
  }
  cout << endl;

  //*********************************
  // Vector element erase at any position
  //*********************************
  // vec.erase(vec.begin() + 0);
  vec.erase(vec.begin() + 2, vec.end()); // from index to last index erase

  // vector print
  cout << "after Erase Vector Elements: ";
  for (int i = 0; i < vec.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec.at(i) << " ";
  }
  cout << endl;

  //*********************************
  // Vector Insert
  //*********************************
  vec.insert(vec.begin() + 1, 1);
  cout << "after insert Vector Elements: ";
  for (int i = 0; i < vec.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec.at(i) << " ";
  }
  cout << endl;

  vec.insert(vec.begin(), 3, 1); // insert 1 three times
  cout << "after insert Vector Elements: ";
  for (int i = 0; i < vec.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec.at(i) << " ";
  }
  cout << endl;
  //*********************************
  // Vector Swap
  //*********************************
  // vector 1 print
  cout << "Before Swap:" << endl;
  vector<int> vec1(5, 5);
  cout << "Vec1: ";
  for (int i = 0; i < vec1.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec1.at(i) << " ";
  }
  cout << endl;

  // vector 2 print
  vector<int> vec2(5, 8);
  cout << "Vec2: ";
  for (int i = 0; i < vec2.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec2.at(i) << " ";
  }
  cout << endl;

  // vector swap
  swap(vec1, vec2);

  cout << "After Swap:" << endl;
  cout << "Vec1: ";
  for (int i = 0; i < vec1.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec1.at(i) << " ";
  }
  cout << endl;
  cout << "Vec2: ";
  for (int i = 0; i < vec1.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec2.at(i) << " ";
  }
  cout << endl;
  //*********************************
  // Vector Sort
  //*********************************
  vec.clear();

  // vector element input
  vec.push_back(15);
  vec.push_back(200);
  vec.push_back(100);
  vec.push_back(30);
  vec.push_back(20);

  cout << "Before Sort: ";
  for (int i = 0; i < vec1.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec.at(i) << " ";
  }
  cout << endl;

  // vector sort
  sort(vec.begin(), vec.end()); // increading order sort

  cout << "after Sort: ";
  for (int i = 0; i < vec1.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec.at(i) << " ";
  }
  cout << endl;
  //*********************************
  // Vector Reverse
  //*********************************
  vec.clear();

  // vector element input
  vec.push_back(15);
  vec.push_back(200);
  vec.push_back(100);
  vec.push_back(30);
  vec.push_back(20);

  cout << "Before Reverse: ";
  for (int i = 0; i < vec1.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec.at(i) << " ";
  }
  cout << endl;

  // vector reverse
  reverse(vec.begin(), vec.end()); // increading order sort

  cout << "after Reverse: ";
  for (int i = 0; i < vec1.size(); i++)
  {
    // cout << vec[i] << " ";
    cout << vec.at(i) << " ";
  }
  cout << endl;

  //*********************************
  // Vector Iteration -> it reduce time complexity
  //*********************************
  vector<int>::iterator it;
  for (it = vec.begin(); it != vec.end(); it++)
  {
    cout << *it << endl;
  }
}