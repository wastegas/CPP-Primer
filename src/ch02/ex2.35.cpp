#include <iostream>

int main()
{
  int i = 0, &r = i;
  auto a = r;   // a is an int (r is an alias for i, which is of type int

  const int ci = i, &cr = ci;
  auto b = ci;  // b is an int (top-level const in ci is dropped)
  auto c = &cr; // c is an int (cr is an alias for ci whose const is top-level
  auto d = &i;  // d is an int* (& of an int object is int*)
  auto e = &ci; // e is const int* (& of a const object is low-level const)

  const auto f = ci; // deduced type of ci is int; f has type const int
  auto &g = ci; // g is a const int& that is bound to ci

  std::cout << "before assignment" << std::endl;
  std::cout << "-----------------" << std::endl;
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "c = " << c << std::endl;
  std::cout << "d = " << d << std::endl;
  std::cout << "e = " << e << std::endl;
  std::cout << "g = " << g << std::endl;

  a = 42;
  b = 42;
  // c = 42; error references const i cannot change
  // d = 42; error d is i's address cannot convert to int
  // e = 42; error e references const int ci cannot change
  // g = 42; sames e

  std::cout << "after assignment" << std::endl;
  std::cout << "----------------" << std::endl;
  std::cout << "a = " << a << " is an int" << std::endl;
  std::cout << "b = " << b << " is an int" << std::endl;
  std::cout << "c = " << c << " is an int with cr's address" << std::endl;
  std::cout << "d = " << d << " is a int* from &i" << std::endl;
  std::cout << "e = " << e << " is a const int*" << std::endl;
  std::cout << "g = " << g << " is a const int&" << std::endl;

  return 0;
}
