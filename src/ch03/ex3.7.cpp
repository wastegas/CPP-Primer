#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string in;
  cin >> in;
  for (decltype(in.size()) index = 0; index < in.size(); index++) {
    if (in[index] == '#')
      break;
    in[index] = 'X';
  }

  for (auto &c : in)
    cout << c;

  cout << endl;

  return 0;
}
