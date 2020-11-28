#include <iostream>

int main()
{
  int sum = 0, v = 50;
  while (v <= 100) {
    sum += v;
    ++v;
  }
  std::cout << "The sum of 50 to 100 inclusive is " << sum << std::endl;

  return 0;
}
