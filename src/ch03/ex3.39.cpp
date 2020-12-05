#include <iostream>
#include <string>
#include <cstring>

using std::cout;   using std::endl;
using std::string; using std::boolalpha;

int main()
{

  // part 1 using strings
  string str1 = "Hello";
  string str2 = "Hello";
  string str3 = "World";
  cout << boolalpha;
  cout << str1 << " = " << str2 << " " << (str1 == str2) << endl;
  cout << str2 << " = " << str3 << " " << (str1 == str3) << endl;
  cout << endl;

  // part 2 using C-style strings
  char cstr1[] = "Hello";
  char cstr2[] = "Hello";
  char cstr3[] = "World";

  if (strcmp(cstr1, cstr2) == 0)
    cout << cstr1 << " and  " << cstr2 << " are equal." << endl;

  if (strcmp(cstr1, cstr3) == 0)
    cout << cstr1 << " and  " << cstr3 << " are equal." << endl;
  else
    cout << cstr1 << " and  " << cstr3 << " are not equal." << endl;

  return 0;
}
