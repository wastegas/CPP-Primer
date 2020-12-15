#include <iostream>
#include <vector>
#include <string>

using std::cout;   using std::endl;
using std::vector; using std::string;

int main(int argc, char **argv)
{
  vector<char> chars = {'H', 'e', 'l', 'l', 'o'};
  string word;
  for (auto const &c : chars)
    word += c;

  word += '\0';

  cout << word << endl;

  return 0;
}
