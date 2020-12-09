/*
 * Change log
 *
 * Exercise 7.4: Class creation
 * Exercise 7.5: add operations to return name and address
 * Exercise 7.9: add read and print operations
 */
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

class Person
{
  std::string name() const { return this->PersonName; }       
  std::string address() const { return this->PersonAddress; } 
  std::string PersonName;
  std::string PersonAddress;
};

std::istream &read(std::istream &is, Person &p)
{
  is >> p.PersonName >> p.PersonAddress;
  return is;
}

std::ostream &print(std::ostream &os, const Person &p)
{
  os << p.name() << " " << p.address();
  return os;
}


#endif // PERSON_H
