#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  vector<string> ivec{"book", "book", "cat", "dog", "book", "car", "cat", "cat"};
  list<string> unique;
  for (auto const &i : ivec) {
    if (find(unique.cbegin(), unique.cend(), i) == unique.cend())
      unique.push_back(i);
    else
      continue;
  }

  for (auto const &i : unique)
    cout << i << " occurs " << count(ivec.cbegin(), ivec.cend(), i) << endl;

  return 0;
}
    
