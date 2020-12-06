#include <iostream>

using std::cin;    using std::cout;
using std::endl;

int absolute(int n)
{
  if (n < 0)
    return n * -1;

  return n;
}

int main()
{
  cout << "Enter a number to compute it's absolute value: ";
  int n = 0;
  cin >> n;
  cout << "|" << n << "|=" << absolute(n) << endl;

  return 0;
}
