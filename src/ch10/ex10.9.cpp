#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  vector<string> ivec{"book", "book", "cat", "dog", "book", "car", "cat", "cat"};
  for (auto const &i : ivec)
    cout << i << " ";
  cout << endl;
  
  sort(ivec.begin(), ivec.end());
  auto end_unique = unique(ivec.begin(), ivec.end());
  ivec.erase(end_unique, ivec.end());

  for (auto const &i : ivec)
    cout << i << " ";
  cout << endl;

  return 0;
}
    
