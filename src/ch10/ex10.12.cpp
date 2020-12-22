#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_data.h"

using namespace std;

bool compareIsbn(const Sales_data& item1, const Sales_data& item2)
{
  return item1.isbn() <  item2.isbn();
}

int main()
{
  vector<Sales_data> books;
  Sales_data item;

  while(read(cin, item))
    books.emplace_back(item);

  sort(books.begin(), books.end(), compareIsbn);

  for (auto const &i : books) {
    print(cout, i);
    cout << endl;
  }

  return 0;
}
