#include <iostream>

int main()
{
  std::cout << "Enter two numbers: " << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  if (v1 < v2) {
    for (; v1 <= v2; ++v1)
      std::cout << v1 << std::endl;
  } else {
    std::cout << "First number must be less than second number" << std::endl;
    return 1;
  }

  return 0;
}
