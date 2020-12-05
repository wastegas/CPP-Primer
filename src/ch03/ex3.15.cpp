#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
  vector<string> svec;
  string in;
  while(cin >> in)
    svec.push_back(in);

  for (auto &s : svec)
    cout << s << endl;

  return 0;
}
