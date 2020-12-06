#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::cin;  using std::string;

int main()
{
  unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
  string in;
  getline(cin, in);

  for (auto &c : in) {
    if (c == 'a')
      ++aCnt;
    if (c == 'e')
      ++eCnt;
    if (c == 'i')
      ++iCnt;
    if (c == 'o')
      ++oCnt;
    if (c == 'u')
      ++uCnt;
  }

  cout << "Number of vowel a: \t" << aCnt << '\n'
       << "Number of vowel e: \t" << eCnt << '\n'
       << "NUmber of vowel i: \t" << iCnt << '\n'
       << "Number of vowel o: \t" << oCnt << '\n'
       << "Number of vowel u: \t" << uCnt << '\n';

  return 0;
}
