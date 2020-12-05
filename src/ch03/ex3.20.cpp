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
  for (decltype(ivec.size()) i = 0; i < ivec.size(); i += 2) {
    sum = ivec[i];
    if ((i + 1) < ivec.size())
      sum += ivec[i + 1];
    cout << sum << " ";
    sum = 0;
    pair = 1;
  }
  cout << endl;
  
  cout << "sum of first and last element: " << ivec[0] + ivec[ivec.size() -1]
       << endl;

  return 0;
}
    
