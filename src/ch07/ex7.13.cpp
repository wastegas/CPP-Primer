#include <iostream>
#include "Sales_data.h"

using std::cin;  using std::cout;
using std::endl; using std::cerr;

int main()
{
  double price = 0;
  
  Sales_data currItem(cin);

  while(cin) {
    Sales_data item(cin);
    if(currItem.isbn() == item.isbn()) {
      currItem.combine(item);
    } else {
      print(cout, currItem) << endl;
      currItem = item;
    }
  } 


  return 0;
}
	
