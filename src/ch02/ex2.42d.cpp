#include <iostream>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold;
  double revenue;
};

int main()
{
  Sales_data currItem, item;
  double price = 0, currPrice = 0;
  
  if (std::cin >> currItem.bookNo >> currItem.units_sold >> currPrice) {
    int cnt = 1;
    while(std::cin >> item.bookNo >> item.units_sold >> price) {
      if(currItem.bookNo == item.bookNo)
	++cnt;
      else {
	std::cout << currItem.bookNo << " occurs "
		  << cnt << " times" << std::endl;
	currItem.bookNo = item.bookNo;
	cnt = 1;
      }
    }
    std::cout << currItem.bookNo << " occurs "
	      << cnt << " times" << std::endl;
  }
  return 0;
}
	
