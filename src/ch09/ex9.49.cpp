#include <iostream>
#include <string>

using std::cout;   using std::endl;
using std::string; using std::cin;

bool find_occurance(const string& s, const string& occurs)
{
  string::size_type pos = 0;
  pos = s.find_first_of(occurs, pos);
  if (pos != string::npos)
    return true;
  else
    return false;
}

int main()
{
  string ascenders("bdfhklt");
  string descender("gjpqy");  
  string curr_word, longest;
  while (cin >> curr_word) {
    if(find_occurance(curr_word, ascenders))
      continue;
    if(find_occurance(curr_word, descender))
      continue;
    if (curr_word.size() > longest.size())
      longest = curr_word;
  }

  cout << "longest word that neither has an ascender or descender " <<
       longest << endl;

  return 0;
}
