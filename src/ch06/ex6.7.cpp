#include <iostream>

using std::cout;
using std::endl;

int call_me()
{
  static int calls = 0;
  return calls++;
}

int main()
{
  int calls = 0;
  while ((calls = call_me()) <= 10) 
    cout << calls << endl;


  return 0;
}
