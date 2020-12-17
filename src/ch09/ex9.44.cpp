#include <iostream>
#include <string>

using std::cout;  using std::endl;
using std::string;

void string_changer(string &s, const string &oldVal, const string &newVal)
{
  for (size_t i = 0; i < s.size() - oldVal.size();)
    if(s[i] == oldVal[0] && s.substr(i, oldVal.size()) == oldVal ) {
      s.replace(i, oldVal.size(), newVal);
	i += newVal.size();
    } else {
      ++i;
    }
}
      


int main()
{

  string s{"He rode his bicycle thru the door even tho they were waving him to stop."};
  cout << s << endl;
  string_changer(s, "thru", "through");
  string_changer(s, "tho", "though");
  cout << s << endl;

  return 0;
}
