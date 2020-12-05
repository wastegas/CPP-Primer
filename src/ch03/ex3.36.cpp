#include <iostream>
#include <iterator>
#include <vector>

using std::cout;   using std::endl;
using std::begin;  using std::end;
using std::vector;


int main()
{
  // part 1 using check equality of two arrays
  int arr1[] = {0, 1, 2, 3, 4, 5};
  int arr2[] = {0, 1, 9, 3, 4, 5};
  int *p1 = arr1;
  int *p2 = arr2;
  auto end = end(arr1);

  for (; p1 != end; p1++) {
    if (*p1 != *p2) {
      break;
    }
    ++p2;
  }
  if (p1 == end)
    cout << "arr1 and arr2 are equal" << endl;
  else
    cout << "arr1 and arr2 are not equal" << endl;
 
  // part 2 using vectors
  vector<int> ivec1 = {0, 1, 2, 3, 4, 5};
  vector<int> ivec2 = {0, 1, 2, 3, 4, 5};
  cout << std::boolalpha;
  cout << "is ivec1 equal to ivec2 " << (ivec1 == ivec2) << '\n';

  return 0;
}
      
