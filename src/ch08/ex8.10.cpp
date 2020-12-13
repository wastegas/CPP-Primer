#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

using std::cout;  using std::endl;
using std::ifstream; using std::istringstream;
using std::cerr; using std::string;
using std::vector;

int main(int argc, char **argv)
{
  if (argc != 2) {
    cerr << "Usage: " << argv[0] << " <file>" << endl;
    return -1;
  }

  ifstream infile(argv[1]);
  if (!infile.is_open()) {
    cerr << "Error opening input file " << argv[2] << endl;
    return -1;
  }

  vector<string> vl;
  string line;
  while(getline(infile, line))
    vl.push_back(line);

  infile.close();
  
  for(auto &l : vl) {
    istringstream words(l);
    string word;
    while (words >> word)
      cout << word << endl;
  }

  return 0;
}
