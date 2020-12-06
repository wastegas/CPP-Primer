#include <iostream>
#include <string>

using std::cin;   using std::cout;
using std::endl;  using std::string;

int main()
{
  string currWord, word;
  int cnt = 1;
  if (cin >> currWord) {
    while (cin >> word) {
      if (currWord == word)
	++cnt;
      else {
	cout << currWord << " occured " << cnt << " times" << endl;
	cnt = 1;
	currWord = word;
      }
    }
  }
  cout << currWord << " occured " << cnt << " times" << endl;
      
  return 0;
}
