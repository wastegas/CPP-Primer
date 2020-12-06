#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::cin;  using std::string;

int main()
{
  unsigned cnt = 0;
  string in;
  getline(cin, in);

  for (auto &c : in) {
    if (isspace(c))
      cnt++;
  }

  cout << "count of spaces, tabs, newlines: " << cnt << endl;

  return 0;
}
