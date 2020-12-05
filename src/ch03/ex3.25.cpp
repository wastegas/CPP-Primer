#include <iostream>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::vector;

int main()
{
  vector <unsigned> scores(11, 0); // 11 elements initialized to 0
  unsigned grade;
  auto it = scores.begin();
  while (cin >> grade) {
    if (grade <= 100) {
      ++*(it + (grade/10)); 
      //++scores[grade/10];
    }
  }

  for (auto &s : scores)
    cout << s << " ";
  cout << endl;

  return 0;
}
