#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

class Dates
{
public:
  Dates(const string& str)
  {
    // parse arg format
    // long month str day, year
    // short mont str day, year
    // numeric m/d/y

    // check if comma separated
    string::size_type pos = 0;
    if ((pos = str.find_first_of(",", 0)) != string::npos)
      parse_comma_input(str);
    else if ((pos=str.find_first_of("/", 0)) != string::npos)
      parse_slash_input(str);
  }
  void print_date()
  {
    cout << month << "/" << day << "/" << year << endl;
  }
private:
  void parse_comma_input(const string& str)
  {
    
  }
  void parse_slash_input(const string& str)
  {
    cout << str << endl;
    month = stoi(str.substr(0, str.find_first_of("/")));
    day = stoi(str.substr(str.find_first_of("/") + 1, str.find_last_of("/")
			  - str.find_first_of("/")));
    year = stoi(str.substr(str.find_last_of("/") + 1, 4));
  }
  
  unsigned year;
  unsigned month;
  unsigned day;
};


int main()
{
  Dates mydate("12/22/1966");
  mydate.print_date();

  return 0;
}
  
