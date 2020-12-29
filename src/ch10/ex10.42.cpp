#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  list<string> lst{"book", "book", "cat", "dog", "book", "car", "cat", "cat"};
  cout << "original list" << endl;
  for(auto const &l : lst)
    cout << l << " ";
  cout << endl;
  
  lst.sort();
  lst.unique();
  cout << "dups removed" << endl;
  for(auto const &l : lst)
    cout << l << " ";
  cout << endl;
  
  return 0;
}
    
