#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
  Sales_data sum, item;
  double price;

  while (cin >> item.bookNo >> item.units_sold >> price) {
    sum.bookNo = item.bookNo;
    sum.units_sold += item.units_sold;
    sum.revenue += item.units_sold * price;
  }
  cout << sum.bookNo << " "
	    << sum.units_sold << " "
	    << sum.revenue << " "
	    << sum.revenue / sum.units_sold << endl;
    
  return 0;
}
