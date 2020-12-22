#include <iostream>
#include <vector>
#include <algorithm>
#include "Sales_data.h"

using namespace std;

int main()
{
  vector<Sales_data> books;
  Sales_data item;

  while(read(cin, item))
    books.emplace_back(item);

  sort(books.begin(), books.end(), [] (const Sales_data& d1, const Sales_data& d2)
				   {
				     return d1.isbn() < d2.isbn();
				   });

  for (auto const &i : books) {
    print(cout, i);
    cout << endl;
  }

  return 0;
}
