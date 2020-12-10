#include <iostream>
#include "Sales_data.h"

int main()
{
  Sales_data currItem, item;
  double price = 0;
  
  read(std::cin, currItem);
  while(std::cin) {
    read(std::cin, item);
    if(currItem.isbn() == item.isbn()) {
      currItem.combine(item);
    } else {
      print(std::cout,currItem) << std::endl;
	currItem = item;
    }
  }
  
  return 0;
}
	
