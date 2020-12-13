#include <iostream>
#include <vector>

using std::cout;   using std::endl;
using std::vector;

inline bool compare(const vector<int> &v1, const vector<int> &v2)
{
  return  v1 == v2;
}


int main()
{
  vector<int> v1 = {1, 2, 3, 4, 5};
  vector<int> v2 = {1, 2, 5};
  vector<int> v3 = {1, 2, 3, 4, 5};


  cout << (compare(v1, v2) ? "equal" : "not equal") << endl;
  cout << (compare(v1, v3) ? "equal" : "not equal") << endl;

  return 0;
}
