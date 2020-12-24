#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  istream_iterator<int> int_iter(cin), eof;
  vector<int> ivec;
  while(int_iter != eof)
    ivec.push_back(*int_iter++);

  sort(ivec.begin(), ivec.end());

  ostream_iterator<int> out_iter(cout, " ");
  copy(ivec.cbegin(), ivec.cend(), out_iter);
  cout << endl;

  return 0;
}
