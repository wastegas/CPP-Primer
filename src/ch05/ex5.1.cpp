#include <iostream>

using std::cout;
using std::endl;

int main()
{
  int sum = 0;
  int val = 0;
  while(sum += val, val <=10)
    val++;
  cout << sum << endl;

  return 0;
}
