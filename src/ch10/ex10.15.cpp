#include <iostream>

using namespace std;

int main()
{
  int a = 1;
  auto f = [a](int b=4) {return a + b;};
  cout << f() << endl;

  return 0;
}
