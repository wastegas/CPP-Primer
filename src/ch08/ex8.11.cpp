#include <iostream>
#include <vector>
#include <sstream>

using std::string;
using std::istringstream;
using std::vector;
using std::cout;    using std::endl;
using std::cin;

struct PersonInfo {
  string name;
  vector<string> phones;
};

int main(int argc, char **argv)
{
  string line, word;
  vector<PersonInfo> people;
  istringstream record;
  while(getline(cin, line)) {
    PersonInfo info;
    record.str(line);
    record >> info.name;
    while (record >> word)
      info.phones.push_back(word);
    people.push_back(info);
    record.clear();
  }

  for (auto &r : people) {
    cout << "Name: " << r.name << endl;
    for (auto &p : r.phones)
      cout << "Phone: " << p << endl;
  }
  
  return 0;
}
