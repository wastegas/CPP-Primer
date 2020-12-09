/*
 * Change log
 *
 * Exercise 7.4: Class creation
 * Exercise 7.5: add operations to return name and address
 * Exercise 7.9: add read and print operations
 * Exercise 7.15: add constructors
 */
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

class Person
{
  Person() = default;
  Person(const std::string &n, const std::string &a) :
    PersonName(n), PersonAddress(a) {}
  Person(std::istream&);
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

Person::Person(std::istream &is)
{
  read(is, *this);
}

std::ostream &print(std::ostream &os, const Person &p)
{
  os << p.name() << " " << p.address();
  return os;
}


#endif // PERSON_H
