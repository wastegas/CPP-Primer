#include <iostream>
#include "Sales_data.h"

using std::cin;  using std::cout;
using std::endl; using std::cerr;

int main()
{
  double price = 0;
  
  Sales_data currItem(cin);
  if (currItem.units_sold == 0) {
    cerr << "(no sales?)" << endl;
    return -1;
  }
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
	
