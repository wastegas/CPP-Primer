#include <iostream>
#include <vector>
#include <string>

using std::cout;   using std::endl;
using std::vector; using std::string;

void show_size_capacity(const vector<int> &v, const string &vname)
{
  cout << vname << endl;
  cout << "size:     " << v.size() << endl;
  cout << "capacity: " << v.capacity() << endl;
}

int main()
{
  vector<int> vec;
  show_size_capacity(vec, "new vec");
  
  cout << "adding 5 elements into vec" << endl;
  for (int i = 0; i < 5; i++)
    vec.push_back(i);

  show_size_capacity(vec, "vec");

  vector<int> vec2;
  vec2.reserve(20);
  show_size_capacity(vec2, "vec2 with reserve(20)");

  cout << "adding 21 to vec2" << endl;
  for (int i = 0; i < 22; i++)
    vec2.push_back(i);

  show_size_capacity(vec2, "vec2");
  
  return 0;
}

