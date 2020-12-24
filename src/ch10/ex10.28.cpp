#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

  auto print = [](const int &n) {cout << n << " ";};
  list<int> in;
  copy(v.cbegin(), v.cend(), inserter(in, in.begin()));
  for_each(in.cbegin(), in.cend(), print);
  cout << endl;
  list<int> fr;  
  copy(v.cbegin(), v.cend(), front_inserter(fr));
  for_each(fr.cbegin(), fr.cend(), print);
  cout << endl;
  vector<int> bk;
  copy(v.cbegin(), v.cend(), back_inserter(bk));
  for_each(v.cbegin(), v.cend(), print);
  cout << endl;			      
  return 0;
}
