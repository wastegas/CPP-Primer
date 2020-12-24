#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>

using namespace std; using namespace std::placeholders;

bool check_size(const string& s, size_t sz)
{
  return s.size() > sz;
}

vector<string> biggies(vector<string>& svec, string::size_type sz)
{
  auto it = partition(svec.begin(), svec.end(), bind(check_size, _1, sz));

  vector<string> ovec(svec.begin(), it);
  return ovec;
}

int main()
{
  vector<string> svec;
  string in;
  while(cin >> in)
    svec.push_back(in);

  string::size_type sz = 5;
  vector<string> ovec = biggies(svec, sz);
  
  for (auto const &s : ovec)
    cout << s << " ";
  cout << endl;


  return 0;
}
  
  
