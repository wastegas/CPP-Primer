#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

void elimDup(vector<string>& svec)
{
  sort(svec.begin(), svec.end());
  auto end_unique = unique(svec.begin(), svec.end());
  svec.erase(end_unique, svec.end());
}

int main()
{
  vector<string>v_excl;
  string word;
  while(cin >> word) {
    v_excl.push_back(word);
  }
  elimDup(v_excl);
  for (const auto &w : v_excl)
    cout << w << " ";
  cout << endl;

  cin.clear(cin.rdstate() & ~istream::eofbit & ~istream::failbit & ~istream::badbit);
  clearerr(stdin);
  // using set doesn't need check for duplicate
  set<string>s_excl;
  while(cin >> word)
    s_excl.insert(word);


  for (const auto &w : s_excl)
    cout << w << " ";
  cout << endl;

  return 0;
}
