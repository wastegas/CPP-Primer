#include <iostream>

using std::cout; using std::endl;

int main()
{
  int sum = 0, v = 50;
  while (v <= 100) {
    sum += v;
    ++v;
  }
  cout << "The sum of 50 to 100 inclusive is " << sum << endl;

  return 0;
}
