#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std; using namespace std::placeholders;

bool check_length(const string& s, const string::size_type sz)
{
  return s.size() >= sz;
}

int main()
{
  vector<string> words;
  string in;
  while(cin >> in)
    words.push_back(in);

  int count = 0;
 
  count = count_if(words.begin(), words.end(), bind(check_length, _1, 6));

  cout << count << endl;

  return 0;
}
