#include <iostream>
#include <vector>

using std::cout;  using std::endl;
using std::vector;

void vec_print(vector<int> &v, vector<int>::iterator it)
{
  if (it != v.end())
    cout << *it++ << endl;
  else
    return;
  vec_print(v, it);
}

int main()
{
  vector<int> v = {1, 2, 3};
  vec_print(v, v.begin());

  return 0;
}
