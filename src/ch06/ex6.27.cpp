#include <iostream>
#include <initializer_list>

using std::cout;   using std::endl;
using std::initializer_list;

void sum_list(int &sum, initializer_list<int> il)
{
  for (auto & n : il)
    sum += n;
}

int main(int argc, char **argv)
{
  int sum = 0;
  sum_list(sum, {1, 2});
  cout << sum << endl;

  return 0;
}
  
