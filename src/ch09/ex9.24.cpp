#include <iostream>
#include <vector>

using std::cout; using std::endl;
using std::vector;

int main(int argc, char **argv)
{
  vector<int> v = {1, 2};
  vector<int> emptyvec;

  cout << v[0] << endl;
  cout << v.at(0) << endl;
  cout << v.front() << endl;
  auto it = v.begin();
  cout << *it << endl;
  if (!emptyvec.empty())
    cout << emptyvec[0];
  else
    cout << "vector is emtpy" << endl;

  return 0;
}
