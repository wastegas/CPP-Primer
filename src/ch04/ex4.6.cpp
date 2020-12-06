#include <iostream>

using std::cin;  using std::cout;
using std::endl;


int main()
{
  int in;
  cin >> in;
  if (in % 2 == 0)
    cout << in << " is even" << endl;
  else
    cout << in << " is odd" << endl;

  return 0;
}
