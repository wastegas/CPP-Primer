#include <iostream>

using std::cout; using std::endl;
using std::cin;

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
  cout << "Enter a number to compute it's factorial:";
  int f = 0;
  cin >> f;
  cout << f << "!=" << fact(f) << endl;

  return 0;
}
