#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main()
{
  vector<pair<string, int>>vps;
  string word;
  while(cin >> word)
    vps.push_back(make_pair(word, word.size()));

  for(const auto& v : vps)
    cout << v.first << " " << v.second << endl;
    
  return 0;
}
