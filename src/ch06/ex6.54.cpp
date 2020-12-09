#include <iostream>
#include <vector>
#include <iterator>

using std::cin; using std::cout;
using std::endl; using std::vector;

int f(int, int);
typedef int (*pf)(int, int);

int main()
{
  vector<pf> pv;
  pv.push_back(f);

  for (auto &i : pv)
    cout << i(1,1) << endl;

  return 0;
}

int f(int a, int b)
{
  return a + b;
}
