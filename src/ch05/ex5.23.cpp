#include <iostream>

using std::cin;   using std::cout;
using std::endl;

int main()
{
  cout << "Enter two integers: ";
  int val1 = 0, val2 = 0;
  cin >> val1 >> val2;
  cout << val1 << " divded by " << val2
       << " = " << val1 / val2 << endl;

  return 0;
}
