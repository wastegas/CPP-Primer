#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char **argv)
{
  if (argc < 4) {
    cerr << "Usage: " << argv[0] << " <file> <outfile1> <outfile2>" << endl;
    return 1;
  }

  try {
    ifstream in(argv[1]);
    ofstream out1(argv[2]);
    ofstream out2(argv[3]);
    in.exceptions(fstream::badbit);
    out1.exceptions(fstream::badbit);
    out2.exceptions(fstream::badbit);
    istream_iterator<int> int_it(in), eof;
    ostream_iterator<int> out1_it(out1, " ");
    ostream_iterator<int> out2_it(out2, " ");

    while(int_it != eof) {
      if(*int_it % 2 == 0)
	*out2_it++ = *int_it++;
      else
	*out1_it++ = *int_it++;
    }
    in.close();
    out1.close();
    out2.close();
  }
  catch (const fstream::failure& e) {
    cerr << e.what() << endl;
  }


  return 0;
}
