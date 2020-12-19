#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::endl;
using std::vector; using std::string;

int main()
{
  // part 1
  vector<string>sints = {"10", "20", "30"};
  int sum_ints = 0;
  for (auto const &i : sints)
    sum_ints += stoi(i);

  cout << sum_ints << endl;

  // part 2
  vector<string>sfloats = {"1.5", "1.5", "3.0"};
  float sum_floats = 0.0;
  for (auto const &f : sfloats)
    sum_floats += stof(f);

  cout << sum_floats << endl;

  return 0;
}
  
