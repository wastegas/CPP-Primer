#include <iostream>
#include <cstring>

using std::cout;   using std::endl;

int main()
{
  char str1[] = "Hello ";
  char str2[] = "world!";
  char str3[12];

  strcpy(str3, str1);
  strcat(str3, str2);

  cout << str1 << "+" << str2 << " = " << str3 << endl;

  return 0;
}
