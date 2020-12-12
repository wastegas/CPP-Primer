/*
 * Change log
 * Exercise 7.2 add isbn() and combine() member functions
 * Exercise 7.6 add read, print and add nonmember functions
 * Exercise 7.11 add constructors
 * Exercise 7.14 own version of default constructor
 * Exercise 7.21 convert to class and hide implementation
 * Exercise 7.26 add avg_price function
 * Exercise 7.41 rewrite constructors to use delegation
 */
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>

class Sales_data {
  friend std::istream &read(std::istream&, Sales_data&);
  friend std::ostream &print(std::ostream&, const Sales_data&);
  friend Sales_data add(const Sales_data&, const Sales_data&);
public:
  Sales_data() = default;      
  Sales_data(const std::string &s) : Sales_data(s, 0, 0) {}   // exercise 7.41
  Sales_data(const std::string &s, unsigned n, double p) :
    bookNo(s), units_sold(n), revenue(n * p) {}     // exercise 7.11
  Sales_data(std::istream &is): Sales_data() { read(is, *this); }; // Exercise 7.41
  std::string isbn() const { return this->bookNo; } // exercise 7.2
  Sales_data& combine(const Sales_data&);           // exercise 7.2
  inline double avg_price() { return revenue / units_sold; } // excercise 7.26
private:                                            // exercise 7.21
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
std::istream &read(std::istream&, Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
Sales_data add(const Sales_data&, const Sales_data&);

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
