#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main(int argc, char **argv)
{
  char args[255];
  if (argc > 1) {
    strcpy(args, argv[1]);
    strcat(args, argv[2]);
    cout << args << endl;
    return 0;
  }
  else {
    cout << "usage: " << argv[0] << " arg1 arg2" << endl;
    return 1;
  }
}
