#include <iostream>

using std::cout; using std::endl;

int fact(int val)
{
  int i = 1;
  int ret = 1;
  while (i <= val) {
    ret *= i;
    ++i;
  }
  return ret;
}

int main()
{
  int f = 5;

  cout << f << "!=" << fact(f) << endl;

  return 0;
}
