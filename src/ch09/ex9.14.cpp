#include <iostream>
#include <string>
#include <vector>
#include <list>

using std::cout; using std::endl;
using std::string;
using std::vector;
using std::list;

int main()
{
  list<const char*> l = {"one", "two", "three"};
  vector<string> v(l.cbegin(), l.cend());

  for (const auto &i : v)
    cout << i << endl;

  return 0;
}
