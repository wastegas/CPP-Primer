#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

inline bool is_larger_than_5_chars(const string& s)
{
  return s.size() >= 5;
}

int main()
{
  vector<string> svec;
  string in;
  while(cin >> in)
    svec.push_back(in);
  
  auto it = partition(svec.begin(), svec.end(), is_larger_than_5_chars);
  copy(svec.begin(), it, ostream_iterator<string>(cout, " "));
  

  cout << endl;
  return 0;
}
  
  
