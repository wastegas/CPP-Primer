#include <iostream>
#include <sstream>
//#include <string>
using std::istream;
using std::cin;
using std::cout;
using std::endl;
using std::istringstream;
using std::getline;
using std::string;

istream& read(istream& is)
{

  is.clear();
  cout << is.rdbuf() << endl;

  is.clear(cin.rdstate() & ~std::istream::eofbit & ~std::istream::failbit & ~std::istream::badbit);
  clearerr(stdin);
  return is;
}

int main()
{
  string line;
  getline(cin, line);
  istringstream input(line);
  read(input);

  std::string s;
  cout << "Enter new input " << endl;
  cin >> s;
  std::cout << s << endl;
  return 0;
}
