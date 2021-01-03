#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<string, int>word_count;
  string word;
  while(cin >> word)
    ++word_count[word];
  
  map<string, int>::const_iterator map_it = word_count.cbegin();
  while (map_it != word_count.cend()) {
    cout << map_it->first << " occurs "
	 << map_it->second << " times" << endl;
    ++map_it;
  }

  return 0;
}
  
