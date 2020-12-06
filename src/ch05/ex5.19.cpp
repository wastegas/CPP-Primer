#include <iostream>
#include <string>

using std::cin;   using std::cout;
using std::endl;  using std::string;

int main()
{
  string resp;
  do {
    cout << "Enter two strings: ";
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1 <<  ((str1 < str2) ? " is less than " :
		      " is greater than ") << str2;
    cout << endl;
    cout << "Continue? 'y' or 'n': ";
    cin >> resp;
  } while (!resp.empty() && toupper(resp[0]) != 'N');

  return 0;
}
