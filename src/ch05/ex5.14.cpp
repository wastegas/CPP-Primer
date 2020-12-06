#include <iostream>
#include <string>

using std::cin;   using std::cout;
using std::endl;  using std::string;

int main()
{
  string currWord, word, most_repeated;
  int cnt = 1;
  int most_count = 0;
  if (cin >> currWord) {
    while (cin >> word) {
      if (currWord == word)
	++cnt;
      else {
	if (cnt > most_count) {
	  most_count = cnt;
	  cnt = 1;
	  most_repeated = currWord;
	  currWord = word;
	}
      }
    }
  }
  if (most_count > 0)
    cout << most_repeated << " occured " << most_count << " times" << endl;
  else
    cout << "no words were repeated" << endl;
      
  return 0;
}
