#include <iostream>
#include <string>

using std::cout;   using std::endl;
using std::string;

int main()
{
  string numbers("1234567890");
  string alpha("abcdefjhijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
  string word("ab2c3d7R4E6");

  cout << "using find_first_of" << endl;
  string::size_type pos = 0;
  while ((pos = word.find_first_of(numbers, pos)) != string::npos) {
    cout << "found number at index: " << pos
	 << " element is " << word[pos] << endl;
    ++pos;
  }

  cout << "using find_first_not_of" << endl;
  pos = 0;
  while((pos = word.find_first_not_of(alpha, pos)) != string::npos) {
    cout << "found number at index: " << pos
	 << " element is " << word[pos] << endl;
    ++pos;
  }
    

  return 0;
}
