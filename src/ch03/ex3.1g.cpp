#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct Sales_data {
  std::string bookNo;
  unsigned units_sold;
  double revenue;
};

int main()
{
  Sales_data currItem, item;
  double price = 0, currPrice = 0;
  
  if (cin >> currItem.bookNo >> currItem.units_sold >> currPrice) {
    int cnt = 1;
    while(cin >> item.bookNo >> item.units_sold >> price) {
      if(currItem.bookNo == item.bookNo)
	++cnt;
      else {
	cout << currItem.bookNo << " occurs "
		  << cnt << " times" << endl;
	currItem.bookNo = item.bookNo;
	cnt = 1;
      }
    }
    cout << currItem.bookNo << " occurs "
	      << cnt << " times" << endl;
  }
  return 0;
}
	
