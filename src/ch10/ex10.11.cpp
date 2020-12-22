#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

bool isShorter(const string& s1, const string& s2)
{
  return s1.size() < s2.size();
}

void elimDup(vector<string>& ivec)
{
  sort(ivec.begin(), ivec.end());
  auto end_unique = unique(ivec.begin(), ivec.end());
  ivec.erase(end_unique, ivec.end());
}

int main()
{
  vector<string> ivec{"book", "book", "cat", "dog", "book", "car", "cat", "cat"};
  elimDup(ivec);
  stable_sort(ivec.begin(), ivec.end(), isShorter);
  for (auto const &i : ivec)
    cout << i << " ";
  cout << endl;

  return 0;
}
    
