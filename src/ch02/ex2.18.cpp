#include <iostream>

int main()
{
  int i = 255;
  int *p = &i;
  std::cout << "Value i = " << i << std::endl;
  std::cout << "Value of *p = &i = " << *p << std::endl;
  std::cout << "*p = 40 updates i = " << i << std::endl;
  i = 26;
  std::cout << "update i = 26, *p = " << *p << std::endl;

  return 0;
}
