#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
  std::string name() const { return this->PersonName; }       // ex 7.5
  std::string address() const { return this->PersonAddress; } // ex 7.5
  std::string PersonName;
  std::string PersonAddress;
}


#endif // PERSON_H
