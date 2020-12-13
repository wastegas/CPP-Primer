#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using std::cout;  using std::endl;
using std::list;  using std::vector;
using std::begin; using std::end;

int main()
{
  int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
  list<int> lst;
  vector<int> vec;
  size_t sz = sizeof(ia) / sizeof(*ia);

  for (int i = 0; i < sz; ++i) {
    lst.push_back(ia[i]);
    vec.push_back(ia[i]);
  }
  
  if (!lst.empty())
    for (auto i = lst.begin(); i != lst.end();) {
      if ((*i % 2) !=0) {
	i = lst.erase(i);
      } else {
	++i;
      }

    }

  if (!vec.empty())
    for (auto i = vec.begin(); i != vec.end(); ++i) {
      if ((*i % 2) == 0)
	vec.erase(i);
    }

  cout << "list elements:" << endl;
  for (const auto &e : lst)
    cout << e << " ";
  cout << endl;

  cout << "vector elements:" << endl;
  for (const auto &e : vec)
    cout << e << " ";
  cout << endl;

  return 0;
}
