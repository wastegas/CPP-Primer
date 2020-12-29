#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "Sales_item.h"
#include <string>

using namespace std;

int main()
{
  vector<Sales_item> data;
  istream_iterator<Sales_item> in_iter(cin), eof;
  while(in_iter != eof)
    data.push_back(*in_iter++);

  sort(data.begin(), data.end(), compareIsbn);
  ostream_iterator<Sales_item> out_iter(cout, "\n");
  auto item = data.begin();
  Sales_item sum;
  for (auto it = ++data.begin(); it != data.end(); ++it) {
    if (item->isbn() == it->isbn())
      sum += *it;
    else {
      out_iter = sum;
      item = it;
    }
  }
  out_iter = sum;;

  return 0;
}

  
