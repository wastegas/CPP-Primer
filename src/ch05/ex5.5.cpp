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
  if (grade < 60)
    cout << grade << " " << scores[0];
  else if (grade >= 60 && grade <=70)
    cout << grade << " " << scores[1];
  else if (grade >70 && grade <=75)
    cout << grade << " " << scores[2];
  else if (grade > 75 && grade < 80)
    cout << grade << " " << scores[3];
  else if (grade >= 80 && grade < 95)
    cout << grade << " " << scores[4];
  else
    cout << grade << " " << scores[5];

  cout << endl;
  
  return 0;
}
