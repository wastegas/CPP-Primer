#include <iostream>
#include <stdexcept>
#include <string>

using std::cin;   using std::cout;
using std::endl;  using std::runtime_error;
using std::exception; using std::string;

int main()
{
  cout << "Enter two integers: ";
  int val1 = 0, val2 = 0;
  while(cin >> val1 >> val2) {
    try {
      if (val2 == 0)
	throw runtime_error("zero entered for second input");
      cout << val1 << " divded by " << val2
	   << " = " << val1 / val2 << endl;
      break;
    }
    catch (runtime_error &e) {
      cout << e.what() << "\nTry again? Yes or No ";
      string resp;
      cin >> resp;
      if (!resp.empty() && toupper(resp[0]) == 'N')
	break;
    }
  }
  return 0;
}
