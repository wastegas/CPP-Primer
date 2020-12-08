#include <iostream>


using std::cout; using std::endl;
using std::end;

int a[] = {0, 1, 2};

decltype(a) &arrRef()
{
  return a;
}

int main()
{
  int *p = arrRef();
   
  for (int i = 0; i < 3; i++)
    cout << *p++ << endl;

  return 0;
}
