#include <iostream>

struct Sales_data {
  std::string  bookNo;
  unsigned units_sold = 0;
  double revenue = 0;
};


int main()
{
  Sales_data sum, item;
  double price;

  while (std::cin >> item.bookNo >> item.units_sold >> price) {
    sum.bookNo = item.bookNo;
    sum.units_sold += item.units_sold;
    sum.revenue += item.units_sold * price;
  }
  std::cout << sum.bookNo << " "
	    << sum.units_sold << " "
	    << sum.revenue << " "
	    << sum.revenue / sum.units_sold << std::endl;
    
  return 0;
}
