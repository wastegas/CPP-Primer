#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
  vector<string> svec;
  string in;
  while(cin >> in)
    svec.push_back(in);

  cout << "original vector" << endl;
  copy(svec.begin(), svec.end(), ostream_iterator<string>(cout, " "));
  cout << endl;

  string::size_type sz = 5;
  auto it = stable_partition(svec.begin(), svec.end(), [sz](const auto& a)
						       {
							 return a.size() >= 5;
						       });
  cout << "partitioned vector" << endl;
  copy(svec.begin(), it, ostream_iterator<string>(cout, " "));
  cout << endl;
  
  return 0;
}
  
  
