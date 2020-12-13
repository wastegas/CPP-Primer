#include <iostream>
#include <list>
#include <deque>

using std::cout;  using std::endl;
using std::list;  using std::deque;


int main()
{
  list<int> lst = {1, 2, 3, 4, 5, 6};
  deque<int> odd;
  deque<int> even;

  for (const auto &i : lst)
    if ((i % 2 == 0))
      even.push_back(i);
    else
      odd.push_back(i);

  cout << "Odds:" << endl;
  for (const auto &o : odd)
    cout << o << " ";

  cout << endl;

  cout << "Evens:" << endl;
  for (const auto &e : even)
    cout << e << " ";

  cout << endl;

  return 0;
}
