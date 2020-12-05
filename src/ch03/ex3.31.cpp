#include <iostream>
#include <vector>

using std::cout; using std::endl;
using std::vector;

int main()
{
  // part 1 copy to another vector
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int arr2[10];
  for (int i = 0; i < 10; i++)
    arr2[i] = arr[i];
  for (int &n : arr2)
    cout << n << " ";
  cout << endl;

  // part 2 use vectors
  vector<int> ivec;
  for (int i = 0; i < 10; i++)
    ivec.push_back(arr[i]);

  for (auto &n : ivec)
    cout << n << " ";
  cout << endl;

  return 0;
}
