#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> v{1, 3, 5, 0, 6, 0, 7, 8, 10, 9};
  auto it = find(v.crbegin(), v.crend(), 0);
  if (it != v.crend()) {
    auto i = v.crend() - it;
    cout << "found at: " << i << endl;
  }

  return 0;
}
  
