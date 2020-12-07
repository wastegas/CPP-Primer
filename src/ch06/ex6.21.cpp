#include <iostream>

using std::cin;   using std::cout;
using std::endl;

int bigger(const int &a, const int *b)
{
  if (a > *(b))
    return a;
  return *(b);
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
