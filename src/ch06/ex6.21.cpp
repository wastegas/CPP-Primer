#include <iostream>

using std::cin;   using std::cout;
using std::endl;

// added inline excercise 6.45
inline int bigger(const int &a, const int *b)
{
  return (a > *(b)) ? a : *(b);
}

int main()
{
  int a;
  int b;
  cout << "Enter two integers: ";
  cin >> a >> b;
  int c = bigger(a, &b);
  cout << c << " is the larger of the two" << endl;

  return 0;
}
