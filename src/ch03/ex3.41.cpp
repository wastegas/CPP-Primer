#include <iostream>
#include <vector>
#include <iterator>

using std::cout;   using std::endl;
using std::vector; using std::begin; using std::end;

int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5};
  vector<int> ivec(begin(arr), end(arr));
  for (auto &n : ivec)
    cout << n << " ";
  cout << endl;

  return 0;
}
