#include <iostream>
#include <list>
#include <string>

using std::cout;   using std::endl;
using std::cin;
using std::list;  using std::string;

int main(int argc, char **argv)
{
  list<string> ls;
  string word;
  while (cin >> word)
    ls.push_back(word);

  for (auto it = ls.begin(); it != ls.end(); it++)
    cout << *it << endl;


  return 0;
}
