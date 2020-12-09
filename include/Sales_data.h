/*
 * Change log
 * Exercise 7.2 add isbn() and combine() member functions
 * Exercise 7.6 add read, print and add nonmember functions
 * Exercise 7.11 add constructors
 */
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>

struct Sales_data {
  Sales_data() = default;                           // exercise 7.11
  Sales_data(const std::string &s) : bookNo(s) {}   // exercise 7.11
  Sales_data(const std::string &s, unsigned n, double p) :
    bookNo(s), units_sold(n), revenue(n * p) {}     // exercise 7.11
  Sales_data(std::istream&);                        // exercise 7.11
  std::string isbn() const { return this->bookNo; } // exercise 7.2
  Sales_data& combine(const Sales_data&);           // exercise 7.2
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
std::istream &read(std::istream&, Sales_data&);

Sales_data::Sales_data(std::istream &is)
{
  read(is, *this); // read will  read  a transaction from  is  into this object
}

std::istream &read(std::istream &is, Sales_data &data)
{
  double price = 0.0;
  is >> data.bookNo >> data.units_sold >> price;
  data.revenue = price * data.units_sold;
  return is;
}

Sales_data add(const Sales_data& lhs, const Sales_data &rhs)
{
  Sales_data sum = lhs;  // copy data members from lhs into sum
  sum.combine(rhs);      // add data members from rhs into sum
  return sum;
}

std::ostream &print(std::ostream &os, const Sales_data &data)
{
  os << data.isbn() << " " << data.units_sold << " "
     << data.revenue << " " <<  data.revenue / data.units_sold;
  return os;
}

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this; // return the object on which the function was called obj.combine()
}

#endif
