#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
  string line;
  while(getline(cin, line))
    cout << line << endl;

  return 0;
}
