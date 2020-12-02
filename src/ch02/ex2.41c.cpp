#include <iostream>
#include <string>

struct Sales_data {
  std::string isbn;
  unsigned units_sold = 0;
  double revenue = 0;
};

int main()
{
  Sales_data sum, item;
  double price;

  while (std::cin >> item.isbn >> item.units_sold >> price) {
    sum.isbn = item.isbn;
    sum.units_sold += item.units_sold;
    sum.revenue += item.units_sold * price;
  }
  std::cout << sum.isbn << " "
	    << sum.units_sold << " "
	    << sum.revenue << " "
	    << sum.revenue / sum.units_sold << std::endl;
    
  return 0;
}
