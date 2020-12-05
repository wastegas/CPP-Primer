#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<int> ivec;
  int in;
  while (cin >> in)
    ivec.push_back(in);

  cout << "ivec contents" << endl;
  for (auto &n : ivec)
    cout << n << " ";
  cout << endl;
  cout << "sum of adjacent elements" << endl;
  int sum = 0;
  int pair = 1;
  for (auto i = ivec.begin(); i != ivec.end(); i += 2) {
    sum = *i;
    if ((i + 1) != ivec.end())
      sum += *(i + 1);
    cout << sum << " ";
    sum = 0;
    pair = 1;
  }
  cout << endl;

  auto beg = ivec.begin();
  auto end = ivec.end() -1;
  cout << "sum of first and last element: " << *beg + *end
       << endl;

  return 0;
}
    
