#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <vector>
#include <cctype>

using namespace std;

void decapitalized(string& word)
{
  if(isupper(word[0]))
    word[0] = tolower(word[0]);
}

void strip_punct(string& word)
{
  for(auto it = word.rbegin(); it != word.rend(); it++)
    if (ispunct(*it)) {
      word =  string(word.begin(), it.base()-1);
      break;
    }
}
	

int main()
{
  map<string, size_t> word_count;
  vector<string> words;
  istream_iterator<string> in_iter(cin), eof;
  while(in_iter != eof)
    words.push_back(*in_iter++);
  
  for (auto &word : words) {
    decapitalized(word);
    strip_punct(word);
    ++word_count[word];
  }
  for (const auto &w : word_count)    
    cout << w.first << " " << w.second << endl;
  return 0;
}
