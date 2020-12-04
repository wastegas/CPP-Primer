#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::endl; using std::string;

int main()
{
  string word1, word2;
  cin >> word1 >> word2;
  if (word1.size() == word2.size())
    cout << word1 << " and " << word2 << " are same size" << endl;
  else
    if (word1.size() > word2.size())
      cout << word1 << " is longer than " << word2 << endl;
    else
      cout << word2 << " is longer than " << word1 << endl;

  return 0;
}
