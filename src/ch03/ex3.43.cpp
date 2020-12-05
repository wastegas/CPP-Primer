#include <iostream>

using std::cout;
using std::endl;

int main()
{
  // initialize and populate array for the 3 parts of the exercise
  constexpr size_t rowCnt = 3, colCnt = 4;
  int ia[rowCnt][colCnt];
  size_t cnt = 0;
  for (auto &row : ia)
    for (auto &col : row) {
      col = cnt;
      ++cnt;
    }

  // part 1 using range for
  for (auto &row : ia) {
    for (auto &col : row) {
      cout << col << " ";
    }
    cout << '\n';
  }

  // part 2 using for loop with subscripts
  for (int i = 0; i < rowCnt; i++) {
    for (int j = 0; j < colCnt; j++)
      cout << ia[i][j] << " ";
    cout << '\n';
  }

  // part 3 using for loop with pointers
  for (int (*i)[colCnt] = ia; i != ia + 3; i++) {
    for (int (*j) = *i; j !=  *i + 4; ++j)
      cout << *j << " ";
    cout << '\n';
  
}
  

  return 0;
}
