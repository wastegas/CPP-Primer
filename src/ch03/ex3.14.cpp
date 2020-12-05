#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<int> in;
  int input;
  while(cin >> input)
    in.push_back(input);

  for (auto &i : in)
    cout << i << endl;

  return 0;
}
    
