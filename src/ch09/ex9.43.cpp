#include <iostream>
#include <string>

using std::cout;  using std::endl;
using std::string;

void string_changer(string &s, const string &oldVal, const string &newVal)
{
  for (auto it = s.begin(); it <= s.end();)
    if(oldVal == string(it, it + oldVal.size())) {
      it = s.erase(it, it + oldVal.size());
      it = s.insert(it, newVal.begin(), newVal.end());
      it += newVal.size();
    } else {
      ++it;
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
