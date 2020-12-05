#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string in;
  cin >> in;
  //for (decltype(in.size()) index = 0; index < in.size(); index++)
  //  in[index] = 'X';
  decltype(in.size()) index = 0;
  while(index < in.size())
    in[index++] = 'X';

  for (auto &c : in)
    cout << c;

  cout << endl;

  return 0;
}
