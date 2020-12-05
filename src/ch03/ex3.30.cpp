#include <iostream>

using std::cout; using std::endl;

int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int &i : arr)
    cout << i << " ";
  cout << endl;

  return 0;
}
