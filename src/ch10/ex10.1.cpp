#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> ivec{1, 1, 1, 40, 40, 2, 55, 55, 100, 99, 40};
  vector<int> unique;
  for (auto const &i : ivec) {
    if (find(unique.cbegin(), unique.cend(), i) == unique.cend())
      unique.push_back(i);
    else
      continue;
  }

  for (auto const &i : unique)
    cout << i << " occurs " << count(ivec.cbegin(), ivec.cend(), i) << endl;

  return 0;
}
    
