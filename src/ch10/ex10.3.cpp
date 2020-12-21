#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
  vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum = accumulate(ivec.cbegin(), ivec.cend(), 0);
  cout << sum << endl;

  return 0;
}
