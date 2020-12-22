#include <iostream>

using namespace std;

int main()
{
  auto f = [](int a=1, int b=4) {return a + b;};
  cout << f() << endl;

  return 0;
}
