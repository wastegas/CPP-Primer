#include <iostream>
#include <fstream>

#include "Sales_data.h"

using std::cout;
using std::endl; using std::cerr;
using std::ifstream;
using std::ofstream;

int main(int argc, char **argv)
{
  double price = 0;
  if (argc == 3) {
    ifstream in(argv[1]);
    ofstream out(argv[2]);
    if (!in.is_open()) {
      cerr << "Error, cannot open file " << argv[1] << endl;
      return -1;
    }
    Sales_data currItem;
    if (read(in, currItem)) {
      Sales_data item;
      while(read(in, item)) {
	if(currItem.isbn() == item.isbn()) {
	  currItem.combine(item);
	} else {
	  print(out, currItem) << endl;
	  currItem = item;
	}
      }
      print(out, currItem) << endl;
    } else {
      cerr << "(no data?)" << endl;
      in.close();
      out.close();
      return -1;
    }
    in.close();
    out.close();
  } else {
    cout << "Usage: " << argv[0] << " <infile> <outfile> " << endl;
    return -1;
  }


  return 0;
}
	
