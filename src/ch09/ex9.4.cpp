#include <iostream>
#include <vector>

using std::cout; using std::endl;
using std::vector;


bool find_int(const vector<int> &v, const int &n)
{
  auto beg = v.begin();
  while (beg != v.end()) {
    if (*beg  == n)
      return true;
    ++beg;
  }
  return false;
}

int main(int argc, char **argv)
{
  vector<int> v = {3, 5, 7, 9, 11};

  cout << (find_int(v, 7) ? "found" : "not found") << endl;
  cout << (find_int(v, 100) ? "found" : "not found") << endl;

  return 0;
}
