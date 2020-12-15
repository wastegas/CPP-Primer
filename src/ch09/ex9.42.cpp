#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;

int main()
{
  string s1("words", 250);
  cout << "s1 size: " <<  s1.size() << endl;
  string s2(s1, 0, 100);
  cout << "s2 size: " << s2.size() << endl;

  return 0;
}
