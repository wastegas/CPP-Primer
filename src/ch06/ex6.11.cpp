#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "Chapter6.h"

using std::cin;   using std::cout;
using std::endl;  using std::vector;
using std::string;

void reset(vector<int>& nlist)
{
  nlist.erase(nlist.begin(), nlist.end());
}

void factorial_list(int n, vector<int> &nlist)
{
  int f = 1;
  while (n > 1) {
    f *= n;
    nlist.push_back(f);
    --n;
  }
}

int main()
{
  vector<int> nlist;
  string resp;
  do {
    if (nlist.empty())
      reset(nlist);
    
    cout << "Enter to computer factorial sequence: ";
    int n = 0;
    cin >> n;
    
    factorial_list(n, nlist);
    cout << "!" << n << "=";
    for (auto &i : nlist)
      cout << i << ", ";
    cout << endl;

    cout << "Computer another? Yes or No: ";
    cin >> resp;

  } while (!resp.empty() && toupper(resp[0]) != 'N');

  return 0;
}
