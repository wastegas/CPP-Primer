#include <iostream>
#include <iterator>

using std::cout;
using std::endl;

// added inline excercise 6.45
inline void print(const int *n)
{
  cout << *n << endl;
}

void print(const int arr[], size_t size)
{
  for (size_t i = 0; i != size; i++) {
    cout << arr[i] << endl;
  }
}

int main()
{
  int i = 0;
  int j[2] = {0, 1};

  print(&i);
  print(j, 2);

  return 0;
}
