#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
  std::string isbn() const { return this->bookNo; } // exercise 7.2
  Sales_data& combine(const Sales_data&);           // exercise 7.2
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this; // return the object on which the function was called obj.combine()
}

#endif
