#include <iostream>

using std::cout;   using std::endl;
using std::cin;

int main()
{
  int grade = 0;
  cin >> grade;
  // part 1 conditional operators
  cout << ((grade > 90) ? "high pass" :
	   (grade <= 90 && grade > 75) ? "pass" :
	   (grade >= 60 && grade <=75 ) ? "low pass" : "fail");
  cout << endl;
  // part 2 if statements
  if (grade > 90) 
    cout << "high pass" << endl;
  else if (grade <=90 && grade > 75)
    cout << "pass" << endl;
  else if (grade >= 60 && grade <= 75)
    cout << "low pass" << endl;
  else
    cout << "fail" << endl;

  return 0;
}
