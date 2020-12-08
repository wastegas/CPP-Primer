#include <iostream>
#include <string>
using std::cout;   using std::endl;
using std::string;

string make_plural(size_t ctr, const string &word, const string& ending = "s")
{
  return (ctr > 1) ? word + ending : word;
}

int main()
{
  string cup = "cup";
  cout << make_plural(2, cup) << endl;

  string match = "match";
  cout << make_plural(2, match, "es") << endl;

  cout << make_plural(1, match) << endl;

  return 0;
}
