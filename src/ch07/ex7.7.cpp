#include <iostream>
#include "Sales_data.h"

using std::cin;  using std::cout;
using std::endl;

int main()
{
  Sales_data currItem, item;
  double price = 0;
  
  if (read(std::cin, currItem)) {
      while(read(std::cin, item)) {

	  if(currItem.isbn() == item.isbn()) {
	    currItem.combine(item);
	  } else {
	    print(std::cout, currItem);
	    cout << endl;
	    currItem = item;
	  }
	}

      print(cout, currItem);
      cout << endl;
  } else {
    std::cerr << "(no sales)" << std::endl;
  }
  return 0;
}
	
