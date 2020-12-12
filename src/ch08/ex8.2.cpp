#include <iostream>

using std::istream;
using std::cin;
using std::cout;
using std::endl;

istream& read(istream& is)
{
  int n;
  is.clear();
  while(is >> n) {
    cout << n << endl;
  }

  is.clear(cin.rdstate() & ~std::istream::eofbit & ~std::istream::failbit & ~std::istream::badbit);
  clearerr(stdin);
  return is;
}

int main()
{
  read(cin);

  std::string s;
  cout << "Enter new input " << endl;
  cin >> s;
  std::cout << s << endl;
  return 0;
}
