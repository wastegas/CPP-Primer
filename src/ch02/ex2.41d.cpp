#include <iostream>
#include <string>

struct Sales_data {
  std::string isbn;
  unsigned units_sold = 0;
  double revenue = 0;
};


int main()
{
  Sales_data currItem, item;
  double price = 0, currPrice = 0;
  
  if (std::cin >> currItem.isbn >> currItem.units_sold >> currPrice) {
    int cnt = 1;
    while(std::cin >> item.isbn >> item.units_sold >> price) {
      if(currItem.isbn == item.isbn)
	++cnt;
      else {
	std::cout << currItem.isbn << " occurs "
		  << cnt << " times" << std::endl;
	currItem.isbn = item.isbn;
	cnt = 1;
      }
    }
    std::cout << currItem.isbn << " occurs "
	      << cnt << " times" << std::endl;
  }
  return 0;
}
	
