#include <iostream>
#include <deque>
#include <string>

using std::cout;   using std::endl;
using std::cin;
using std::deque;  using std::string;

int main(int argc, char **argv)
{
  deque<string> ds;
  string word;
  while (cin >> word)
    ds.push_back(word);

  for (auto it = ds.begin(); it != ds.end(); it++)
    cout << *it << endl;


  return 0;
}
