#include <iostream>
#include <vector>

using std::cout;   using std::endl;
using std::vector;

int main()
{
  vector<int> vec1 = {0, 1, 1, 2};
  vector<int> vec2 = {0, 1, 1, 2, 3, 5, 8};

  auto it1 = vec1.begin();
  auto it2 = vec2.begin();

  if (*it1 == *it2) 
    cout << "vec1 is a prefix of vec2" << endl;
  else
    cout << "vec1 is not a prefix of vec2" << endl;
    
  return 0;
}
