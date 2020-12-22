#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<string> biggies(vector<string>& svec, string::size_type sz)
{
  auto it = partition(svec.begin(), svec.end(), [sz](const auto &a)
						{
						  return a.size() >= sz;
						});
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
  
  
