#include <iostream>
#include "Sales_data.h"

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main()
{
  Sales_data book;
  double price = 0;
  double average_price = 0;
  // read ISBN, number of copies sold and sale price
  cin >> book.bookNo >> book.units_sold >> price;
  // write BOOKNO number of copies sold, total revenue, and avg price
  if (book.units_sold > 0) {
    book.revenue = book.units_sold * price;
    average_price = book.revenue / book.units_sold;
    cout << book.bookNo << " " <<book.units_sold << " " << book.revenue << " "
	      << average_price << endl;
    return 0;
  } else {
    cerr << "(no sales)" << endl;
  }

}
