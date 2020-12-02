#include <iostream>
#include "Sales_data.h"

int main()
{
  Sales_data item1, item2;
  double price1 = 0, price2 = 0;
  unsigned total_sold = 0;
  std::cin >> item1.bookNo >> item1.units_sold >> price1
	   >> item2.bookNo >> item2.units_sold >> price2; // read a pair of transactions
  if (item1.bookNo == item2.bookNo) {
    total_sold = item1.units_sold + item2.units_sold;
    if (total_sold != 0) {
      item1.revenue = item1.units_sold * price1;
      item2.revenue = item2.units_sold * price2;
    
      std::cout << item1.bookNo << " "
		<< item1.revenue + item2.revenue << " "
		<< item1.units_sold + item2.units_sold  << " " 
		<< (item1.revenue + item2.revenue) / (item1.units_sold + item2.units_sold)
		<< std::endl;
      return 0;
    } else {
      std::cerr << "(no sale)" << std::endl;
      return -1; // failure
    }
  } else {
    std::cerr << "must refer to the same books" << std::endl;
    return -1; // failure
  }

}
