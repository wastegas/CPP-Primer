#include <iostream>
#include "Sales_data.h"

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
