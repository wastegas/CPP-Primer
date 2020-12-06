#include <iostream>
#include <vector>
#include <string>

using std::cin;  using std::cout;
using std::endl; using std::vector;
using std::string;

int main()
{
  vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
  int grade = 0;
  cin >> grade;
  cout << grade << " "
       << ((grade < 60) ? scores[0] : scores[(grade - 50) / 10])
       << endl;

  return 0;
}
