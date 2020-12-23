#include <iostream>

using namespace std;

int main()
{
  int val = 10;
  auto f = [&val] {while(--val); return val;};
  cout << (f() ? "true" : "false") << endl;
  cout << val << endl;
  return 0;
}
