#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std; using namespace std::placeholders;

bool check_length(const int& in, const string& s)
{
  return in == s.size();
}

int main()
{
  vector<int> ivec{1, 9, 5, 6, 8, 10, 2, 3, 11, 20};
  string s("elephant");
  auto it = find_if(ivec.begin(), ivec.end(), bind(check_length, _1, s));

  cout << *it << endl;

  return 0;
}
