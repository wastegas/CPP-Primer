#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto it = v.cbegin(); it != v.cend(); it++)
    cout << *it << " ";

  cout << endl;

  return 0;
}
