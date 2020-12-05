#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
  vector<int> v1;              // size 0; empty vector
  vector<int> v2(10);          // size 10; init each to 0
  vector<int> v3(10, 42);      // size 10, init all to 42
  vector<int> v4{10};          // size 1, element 10
  vector<int> v5{10, 42};      // size 2, elements 10 and 42
  vector<string> v6{10};       // size 10, default ""
  vector<string> v7{10, "hi"}; // size 10, init all "hi"

  cout << "v1" << endl;
  cout << "size=" << v1.size() << endl;
  for (auto i = v1.begin(); i != v1.end(); i++)
    cout << *i << " ";
  cout << endl;

  cout << "v2" << endl;
  cout << "size=" << v2.size() << endl;
  for (auto i = v2.begin(); i != v2.end(); i++)    
    cout << *i << " ";
  cout << endl;

  cout << "v3" << endl;
  cout << "size=" << v3.size() << endl;
  for (auto i = v3.begin(); i != v3.end(); i++)    
    cout << *i << " ";
  cout << endl;

  cout << "v4" << endl;
  cout << "size=" <<  v4.size() << endl;
  for (auto i = v4.begin(); i != v4.end(); i++)    
    cout << *i << " ";
  cout << endl;

  cout << "v5" << endl;
  cout << "size=" << v5.size() << endl;
  for (auto i = v5.begin(); i != v5.end(); i++)    
    cout << *i << " ";
  cout << endl;

  cout << "v6" << endl;
  cout << "size=" << v6.size() << endl;
  for (auto i = v6.begin(); i != v6.end(); i++)    
    cout << *i << " ";
  cout << endl;

  cout << "v7" << endl;
  cout << "size=" << v7.size() << endl;
  for (auto i = v7.begin(); i != v7.end(); i++)    
    cout << *i << " ";
  cout << endl;
  


  return 0;
}
