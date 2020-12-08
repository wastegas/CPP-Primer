#include <iostream>

using std::cin;    using std::cout;
using std::endl;

// added inline excercise 6.45
inline int absolute(int n)
{
  return n < 0 ? n * -1 : n;
}

int main()
{
  cout << "Enter a number to compute it's absolute value: ";
  int n = 0;
  cin >> n;
  cout << "|" << n << "|=" << absolute(n) << endl;

  return 0;
}
