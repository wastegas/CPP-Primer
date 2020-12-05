#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin;   using std::cout;
using std::endl;  using std::string;
using std::vector;

int main()
{
  vector<string> svec;
  string in;
  while(cin >> in)
    svec.push_back(in);

  const int WORDS_PER_LINE = 8;
  int cnt = 0;

  cout << "original vector" << endl;
  for (auto it = svec.begin(); it != svec.end(); it++) {
    cout << *it << " ";
    cnt++;
    if (cnt == WORDS_PER_LINE) {
      cout << endl;
      cnt = 0;
    }
  }
  cout << endl;
  cout << "convert to uppercase" << endl;

  auto i = svec.begin();
  while (i != svec.end()) {
    for (auto &c : *i)
      c = toupper(c);
    ++i;
  }
  
  cnt = 0;
  for (auto it = svec.begin(); it != svec.end(); it++) {
    cout << *it << " ";
    cnt++;
    if (cnt == WORDS_PER_LINE) {
      cout << endl;
      cnt = 0;
    }
  }

  cout << endl;
  return 0;
}
