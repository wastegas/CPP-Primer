#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::cin;  using std::string;

int main()
{
  unsigned cnt = 0;
  string in;
  getline(cin, in);
  int ffCnt = 0, flCnt = 0, fiCnt = 0;
  for (auto it = in.begin()+1; it != in.end(); ++it) {
    if (*(it) == 'f') {
      ++it;
      switch (*it) {
	case 'f' :
	  ++ffCnt;
          break;
	case 'l' :
	  ++flCnt;
          break;
	case 'i' :
	  ++fiCnt;
          break;
	}
      --it;
    }
  }
	    
  cout << "count ff: " << ffCnt << '\n'
       << "count fl: " << flCnt << '\n'
       << "count fi: " << fiCnt << endl;

  return 0;
}
