#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> vec;
  fill_n(back_inserter(vec), 10, 0);

  for (auto const &i : vec)
    cout << i << " ";

  cout << endl;

  return 0;
}
