#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string in;
  cin >> in;
  decltype(in.size()) index = 0;
  while(index < in.size()) {
    if (ispunct(in[index]))
	in[index] = ' ';
    ++index;
  }

  for (auto &c : in)
    cout << c;
  cout << endl;

  return 0;
}

      
	
		    
