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
  for (decltype(svec.size()) index = 0; index <= svec.size();
       index++) {
    cout << svec[index] << " ";
    cnt++;
    if (cnt == WORDS_PER_LINE) {
      cout << endl;
      cnt = 0;
    }
  }
  cout << endl;
  cout << "conver to uppercase" << endl;

  decltype(svec.size()) i = 0;
  while (i < svec.size()) {
    for (auto &c : svec[i])
      c = toupper(c);
    ++i;
  }
  
  cnt = 0;
  for (decltype(svec.size()) index = 0; index <= svec.size();
       index++) {
    cout << svec[index] << " ";
    cnt++;
    if (cnt == WORDS_PER_LINE) {
      cout << endl;
      cnt = 0;
    }
  }

  cout << endl;
  return 0;
}
