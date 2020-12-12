#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::ifstream;
using std::ofstream;
using std::vector;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

void read_file(vector<string> &vs, const string &path)
{
  ifstream in(path);
  string line;
  if (in.is_open()) {
    while(in >> line)
      vs.push_back(line);
    in.close();
  } else {
    cerr << "unable to open " << path << endl;
  }
}

int main(int argc, char **argv)
{
  vector<string> vs;
  if (argc == 2) {
    string path = argv[1];
    read_file(vs, path);
    for (auto &i : vs)
      cout << i << endl;
  } else {
    cout << "usage: " << argv[0] << " <file>" << endl;
  }

  return 0;
}
