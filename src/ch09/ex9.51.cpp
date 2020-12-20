#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::toupper;
using std::isdigit;

class Dates
{
public:
  Dates(string& str)
  {
    // parse arg format
    // long month str day, year
    // short mont str day, year
    // numeric m/d/y

    // check if comma separated
    string::size_type pos = 0;
    if ((pos = str.find_first_of(",", 0)) != string::npos)
      parse_comma_input(str);
    // check if slash separated
    else if ((pos=str.find_first_of("/", 0)) != string::npos)
      parse_slash_input(str);
  }
  void print_date()
  {
    cout << month << "/" << day << "/" << year << endl;
  }
private:
  void parse_comma_input(string& str)
  {
    for (auto &c : str) {
      if (!isdigit(c))
	c = toupper(c);
    }

    if(str.substr(0,3) == "JAN") month = 1;
    if(str.substr(0,3) == "FEB") month = 2;
    if(str.substr(0,3) == "MAR") month = 3;
    if(str.substr(0,3) == "APR") month = 4;
    if(str.substr(0,3) == "MAY") month = 5;
    if(str.substr(0,3) == "JUN") month = 6;
    if(str.substr(0,3) == "JUL") month = 7;
    if(str.substr(0,3) == "AUG") month = 8;
    if(str.substr(0,3) == "SEP") month = 9;
    if(str.substr(0,3) == "OCT") month = 10;
    if(str.substr(0,3) == "NOV") month = 11;
    if(str.substr(0,3) == "DEC") month = 12;

    day = stoi(str.substr(str.find_first_of(" ") + 1,  str.find_first_of(",")
			  - str.find_first_of(" ") - 1));

    year = stoi(str.substr(str.find_last_of(" ") + 1));
    
    
  }
  void parse_slash_input(const string& str)
  {
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
  string d1={"12/22/1966"};
  Dates mydate(d1);
  mydate.print_date();

  string d2={"December 22, 1966"};
  Dates mydate2(d2);
  mydate2.print_date();
  return 0;
}
  
