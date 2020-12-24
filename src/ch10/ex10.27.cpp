#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
  vector<string> svec{"book", "book", "cat", "dog", "book", "car", "cat", "cat"};
  list<string> v;
  sort(svec.begin(), svec.end());
  unique_copy(svec.cbegin(), svec.cend(), front_inserter(v));

  for (auto const &s : v)
    cout << s << " ";
  cout << endl;

  return 0;
}
    
