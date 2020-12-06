#include <iostream>
#include <stdexcept>

using std::cin;   using std::cout;
using std::endl;  using std::runtime_error;

int main()
{
  cout << "Enter two integers: ";
  int val1 = 0, val2 = 0;
  cin >> val1 >> val2;
  if (val2 == 0)
    throw runtime_error("zero entered for second input");
  cout << val1 << " divded by " << val2
       << " = " << val1 / val2 << endl;

  return 0;
}
