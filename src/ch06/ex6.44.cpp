#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::cin;  using std::string;

inline bool isShorter(const string &s1, const string &s2)
{
  return s1.size() < s2.size();
}

int main()
{
  cout << "Enter two strings: ";
  string s1, s2;
  cin >> s1 >> s2;
  if (isShorter(s1, s2))
    cout << s1 << " is shorter than " << s2 << endl;
  else
    cout << s2 << " is shorter than " << s1 << endl;

  return 0;
}
