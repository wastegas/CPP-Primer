#include <iostream>
#include <map>
#include <string>
#include <iterator>

using namespace std;

int main()
{
  map<string, size_t> word_count;
  istream_iterator<string> in_iter(cin), eof;
  while(in_iter != eof)
    ++word_count[*in_iter++];

  for (const auto &c : word_count)
    cout << c.first << " " << c.second << endl;

  return 0;
}
