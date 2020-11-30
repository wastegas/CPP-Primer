#include <iostream>
#include <string>

struct Sales_data {
  std::string isbn;
  unsigned units_sold;
  double revenue;
};

int main()
{
  Sales_data book;
  double price = 0;
  double average_price = 0;
  // read ISBN, number of copies sold and sale price
  std::cin >> book.isbn >> book.units_sold >> price;
  // write ISBN number of copies sold, total revenue, and avg price
  if (book.units_sold > 0) {
    book.revenue = book.units_sold * price;
    average_price = book.revenue / book.units_sold;
    std::cout << book.isbn << " " <<book.units_sold << " " << book.revenue << " "
	      << average_price << std::endl;
    return 0;
  } else {
    std::cerr << "(no sales)" << std::endl;
  }

}
