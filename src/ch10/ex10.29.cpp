#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char **argv)
{
  if (argc < 2) {
    cerr << "Usage: " << argv[0] << " <file>" << endl;
    return 1;
  }

  try {
    ifstream in(argv[1]);
    in.exceptions(fstream::badbit);
    istream_iterator<string> str_it(in), eof;
    vector<string>vec(str_it, eof);
    in.close();
    for_each(vec.cbegin(), vec.cend(), [](const auto& s){ cout << s << endl;});
  }
  catch (const fstream::failure& e) {
    cerr << e.what() << endl;
  }


  return 0;
}
