#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
  string word, longWord;
  while(cin >> word)
    longWord += word;

  cout << longWord << endl;

  return 0;
}
