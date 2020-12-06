#include <iostream>
#include "Chapter6.h"

using std::cout; using std::endl;
using std::cin;


int main()
{
  cout << "Enter a number to compute it's factorial:";
  int f = 0;
  cin >> f;
  cout << f << "!=" << fact(f) << endl;

  return 0;
}
