#include <iostream>

struct Foo { /* empty */ }; // added ; so make will not error out

// will not compile expected ';' after struct definition

int main()
{
  return 0;
}
