#include <iostream>
#include <forward_list>

using std::cout;   using std::endl;
using std::forward_list;


int main()
{
  forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (const auto &e : flst)
    cout << e << " ";
  cout << endl;
  auto prev = flst.before_begin(); // before first element
  auto curr = flst.begin(); // first element
  while (curr != flst.end()) {
    if (*curr % 2 != 0)
      curr = flst.erase_after(prev);
    else {
      prev = curr;
      ++curr;
    }
  }

  for (const auto &e : flst)
    cout << e << " ";
  cout << endl;

  return 0;
}
