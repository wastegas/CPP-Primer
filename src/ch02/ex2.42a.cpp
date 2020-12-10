#include <iostream>

struct Sales_data {
  std::string  bookNo;
  unsigned units_sold = 0;
  double revenue = 0;
};

int main()
{
  Sales_data book;
  double price = 0;
  double average_price = 0;
  // read ISBN, number of copies sold and sale price
  std::cin >> book.bookNo >> book.units_sold >> price;
  // write BOOKNO number of copies sold, total revenue, and avg price
  if (book.units_sold > 0) {
    book.revenue = book.units_sold * price;
    average_price = book.revenue / book.units_sold;
    std::cout << book.bookNo << " " <<book.units_sold << " " << book.revenue << " "
	      << average_price << std::endl;
    return 0;
  } else {
    std::cerr << "(no sales)" << std::endl;
  }

}
