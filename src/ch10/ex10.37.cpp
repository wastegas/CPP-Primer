#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  auto e7 = find(vec.crbegin(), vec.crend(), 7);
  auto e3 = find(vec.crbegin(), vec.crend(), 3);
  list<int> lst(e7, e3 + 1);

  for (const auto &l : lst)
    cout << l << " ";
  cout << endl;

  return 0;
}
