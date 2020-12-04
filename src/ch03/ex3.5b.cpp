#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
  string word, longWord;
  if (cin >> word) {
    longWord += word;
    while(cin >> word) {
      longWord += " ";
      longWord += word;
    }
  }
  cout << longWord << endl;

  return 0;
}
