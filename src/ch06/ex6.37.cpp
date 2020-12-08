#include <iostream>


using std::cout; using std::endl;
using std::end;

int a[] = {0, 1, 2};
using arr3 = int[3];

inline int (&arrRef())[3]
{
  return a;
}

inline arr3& getarr()
{
  return a;
}

inline auto arr3t() -> int(&)[3]
{
  return a;
}

int main()
{
  int *p = arrRef();
  int *p2 = getarr();
  int *p3 = arr3t();
  
  for (int i = 0; i < 3; i++)
    cout << *p++ << endl;

  for (int i = 0; i< 3; i++)
    cout << *p2++ << endl;

  for (int i = 0; i < 3; i++)
    cout << *p3++ << endl;

  return 0;
}
