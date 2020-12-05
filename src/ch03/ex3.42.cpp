#include <iostream>
#include <vector>

using std::cout;   using std::endl;
using std::vector;

int main()
{
  vector<int> ivec = {0, 1, 2, 3, 4, 5};
  int arr[ivec.size()];
  int *ptr = arr;
  for (auto i = ivec.begin(); i < ivec.end(); i++) {
    *(ptr) = *i;
    ptr++;
  }

  for (int n : arr)
    cout << n << " ";
  cout << endl;

  return 0;
}
    
