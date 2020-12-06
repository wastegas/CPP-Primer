#include <iostream>
#include <vector>

using std::cout;   using std::endl;
using std::vector;

int main()
{
  vector<int> ivec = {1, 2, 3, 4, 5};
  for (auto &i : ivec) {
    cout << i << " is " << ((i % 2) ? "odd" : "even");
    cout << endl;
}

  return 0;
}
