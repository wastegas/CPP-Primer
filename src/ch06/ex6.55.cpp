#include <iostream>
#include <vector>
#include <iterator>
#include <cassert>

using std::cin; using std::cout;
using std::endl; using std::vector;

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
typedef int (*pf)(int, int);

int main()
{
  vector<pf> pv{add, subtract, multiply, divide};

  for (auto &i : pv)
    cout << i(15,3) << endl;

  return 0;
}

int add(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}

int multiply(int a, int b)
{
  return a * b;
}

int divide(int a, int b)
{
  assert(b != 0);
  return a / b;
}
