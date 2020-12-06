#include <iostream>
#include <string>

using std::cin;   using std::cout;
using std::endl;  using std::string;

int main()
{
  string currWord, word;
  bool repeat = false;
  if (cin >> currWord) {
    while(cin >> word) {
      if (currWord == word) {
	if (isupper(word[0])) {
	  cout << word << " was repeated in a row" << endl;
	  repeat = true;
	  break;
	} else {
	  continue;
	}
      }
      currWord = word;
    }
    if (!repeat)
      cout << "no words were repeated" << endl;
  } 
    
  return 0;
}
