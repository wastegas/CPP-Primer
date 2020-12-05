#include <iostream>

using std::cout;
using std::endl;

int main()
{
  constexpr size_t rowCnt = 3, colCnt = 4;
  int ia[rowCnt][colCnt];
  size_t cnt = 0;
  for (auto &row : ia)
    for (auto &col : row) {
      col = cnt;
      ++cnt;
    }

  using int_array = int[4];
  for (int_array *i = ia; i != ia + 3; i++) {
    for (int *j = *i; j !=  *i + 4; ++j)
      cout << *j << " ";
    cout << '\n';
  
}
  

  return 0;
}
