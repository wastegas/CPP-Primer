#include <iostream>
#include <string.h>

using std::cout;   using std::endl;
using std::string;

string prefix_suffix(string &s, const string& prefix, const string& suffix)
{
  s.insert(0, prefix);
  s.insert(prefix.size(), " ");
  s.append(" ");
  s.append(suffix);
  return s;
}

int main()
{
  string name = {"Roy Jones"};
  string prefix = "Mr.";
  string suffix = "Jr.";
  string newname = prefix_suffix(name, prefix, suffix);

  cout << newname << endl;

  return 0;
}
