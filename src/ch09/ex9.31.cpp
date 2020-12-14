#include <iostream>
#include <forward_list>

using std::cout;   using std::endl;
using std::forward_list;


int main()
{
  forward_list<int> flst = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto prev = flst.before_begin();
  auto curr = flst.begin();
  while(curr != flst.end()) {
    if (*curr % 2) {
      curr = flst.insert_after(prev, *curr);
      curr++;
      curr++;
      prev++;
      prev++;
      
    } else {
      curr = flst.erase_after(prev);
    }

  }

  for (const auto &i : flst)
    cout << i << " ";
  cout << endl;

  return 0;
}
