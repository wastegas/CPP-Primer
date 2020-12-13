#include <iostream>
#include <vector>
#include <iterator>

using std::cout; using std::endl;
using std::vector;
using std::iterator;

vector<int>::const_iterator find_int(vector<int>::const_iterator &beg,
			       vector<int>::const_iterator &end, const int &n)
{
  while(beg != end) {
    if (*beg == n) {
      return beg;
    }
    ++beg;
  }
  
  return end;
}

int main(int argc, char **argv)
{
  vector<int> v = {3, 5, 7, 9, 11};
  auto beg = v.cbegin();
  auto end = v.cend();

  auto it = v.cbegin();

  it = find_int(beg, end, 7);
  cout << (*it == 7 ? "found" : "not found") << endl;

  it = find_int(beg, end, 100);
  cout << (*it == 100 ? "found" : "not found") << endl;

  return 0;
}
