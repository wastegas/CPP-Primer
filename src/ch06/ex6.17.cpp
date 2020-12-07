#include <iostream>
#include <string>

using std::cin;   using std::cout;
using std::endl;  using std::string;

bool check_capital(const string &str)
{
  for(const auto c : str)
    if (isupper(c))
      return true;

  return false;
}

void capitalize(string &str)
{
  for(auto &c : str) {
    c = toupper(c);
  }
  cout << endl;
}

int main()
{
  cout << "Enter a string: ";
  string str;
  cin >> str;
  if (check_capital(str)) {
    cout << "contains a capital, I'll capitalize the rest" << endl;
    capitalize(str);
  }

  cout << str << endl;

  return 0;
}
