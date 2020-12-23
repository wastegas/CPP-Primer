#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  vector<string> words;
  string in;
  while(cin >> in)
    words.push_back(in);

  int count = 0;
 
  count = count_if(words.begin(), words.end(),
	   [] (string &i) {
	     return i.size() > 6;
	   });

  cout << count << endl;

  return 0;
}
