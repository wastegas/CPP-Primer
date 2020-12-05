#include <iostream>
#include <vector>

using std::cout;
using std::endl; using std::vector;

int main()
{
  vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "Original vector" << endl;
  for (auto &i : ivec)
    cout << i << " ";
  cout << endl;

  for(auto it = ivec.begin(); it != ivec.end(); it++)
    *it = (*it) * 2;

  cout << "elements twice value" << endl;
  for (auto &i : ivec)
    cout << i << " ";
  cout << endl;

  return 0;
}
