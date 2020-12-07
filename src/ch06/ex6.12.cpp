#include <iostream>

using std::cout;
using std::endl;

void swap(int &n1, int &n2)
{
  int tmp = n1;
  n1 = n2;
  n2 = tmp;
}

int main()
{
  int n1 = 3;
  int n2 = 4;

  cout << "before swap n1=" << n1 << " n2=" << n2 << endl;
  swap(n1, n2);
  cout << "after swap n1=" << n1 << " n2=" << n2 << endl;

  return 0;
}
    
