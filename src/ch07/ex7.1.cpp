#include <iostream>
#include "Sales_data.h"

void print(const Sales_data &data)
{
  std::cout << data.bookNo << " "
           <<  data.revenue << " "
	   <<  data.units_sold << " "
	   <<  data.revenue / data.units_sold << std::endl;
  return;
}

int main()
{
  Sales_data currItem, item;
  double price = 0;
  
  if (std::cin >> currItem.bookNo >> currItem.units_sold >> price) {
    currItem.revenue = currItem.units_sold * price;
    while(std::cin >> item.bookNo >> item.units_sold >> price) {
      item.revenue = item.units_sold * price;
      if(currItem.bookNo == item.bookNo) {
	currItem.revenue += item.revenue;
	currItem.units_sold += item.units_sold;
      }
      else {
	print(currItem);
	currItem.bookNo = item.bookNo;
        currItem.revenue = item.revenue;
	currItem.units_sold = item.units_sold;
      }
    }
    print(currItem);
  } else {
    std::cerr << "(no sales)" << std::endl;
  }
  return 0;
}
	
