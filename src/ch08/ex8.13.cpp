#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

using std::string;
using std::istringstream;
using std::vector;
using std::cout;    using std::endl;
using std::ifstream;
using std::cerr;

struct PersonInfo {
  string name;
  vector<string> phones;
};

int main(int argc, char **argv)
{
  if (argc !=2) {
    cout << "Usage: " << argv[0] << " <infile>" << endl;
    return -1;
  }
  ifstream infile(argv[1]);
  if (!infile.is_open()) {
    cerr << "Failed to open " << argv[1] << endl;
    return -1;
  }
  string line, word;
  vector<PersonInfo> people;
  istringstream record;
  while(getline(infile, line)) {
    PersonInfo info;
    record.str(line);
    record >> info.name;
    while (record >> word)
      info.phones.push_back(word);
    people.push_back(info);
    record.clear();
  }
  infile.close();

  for (auto &r : people) {
    cout << "Name: " << r.name << endl;
    for (auto &p : r.phones)
      cout << "Phone: " << p << endl;
  }
  
  return 0;
}
