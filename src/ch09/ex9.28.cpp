#include <iostream>
#include <forward_list>
#include <string>

using std::cout;   using std::endl;
using std::forward_list;  using std::string;

bool find_insert(forward_list<string> &flst,
		 const string &first, const string &second)
{
  bool res = false;
  auto prev = flst.before_begin();
  auto curr = flst.begin();

  while (curr != flst.end())
    if (*curr == first) {
      flst.insert_after(curr, second);
      res = true;
      break;
    } else {
      prev = curr;
      ++curr;
    }
  return res;
}


int main()
{
  forward_list<string> flst = {"one", "two", "four", "five"};
  cout << (find_insert(flst, "two", "three") ? "insert success" : "insert failed")
       << endl;
  for (const auto &e : flst)
    cout << e << " ";
  cout << endl;

  return 0;
}
