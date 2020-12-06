#include <iostream>

using std::cout;
using std::endl;

int main()
{
  cout << "Size of built-in types" << endl;
  cout << "----------------------" << endl;
  cout << "short\t" << sizeof(short) << endl;
  cout << "short int\t" << sizeof(short int) << endl;
  cout << "signed short\t" << sizeof(signed short) << endl;
  cout << "signed short int\t" << sizeof(signed short int) << endl;
  cout << "unsigned short\t" << sizeof(unsigned short) << endl;
  cout << "unsigned short int\t" << sizeof(unsigned short int) << endl;
  cout << "int\t" << sizeof(int) << endl;
  cout << "signed\t" << sizeof(signed) << endl;
  cout << "signed int\t" << sizeof(signed int) << endl;
  cout << "unsigned\t" << sizeof(unsigned) << endl;
  cout << "unsigned int\t" << sizeof(unsigned int) << endl;
  cout << "long\t" << sizeof(long) << endl;
  cout << "long int\t" << sizeof(long int) << endl;
  cout << "signed long\t" << sizeof(signed long) << endl;
  cout << "signed long int\t" << sizeof(signed long int) << endl;
  cout << "unsigned long\t" << sizeof(unsigned long) << endl;
  cout << "unsigned long int\t" << sizeof(unsigned long int) << endl;
  cout << "long long\t" << sizeof(long long) << endl;
  cout << "long long int\t" << sizeof(long long int) << endl;
  cout << "signed long long\t" << sizeof(signed long long) << endl;
  cout << "signed long long int\t" << sizeof(signed long long int) << endl;
  cout << "unsigned long long\t" << sizeof(unsigned long long) << endl;
  cout << "unsigned long long int\t" << sizeof(unsigned long long int) << endl;
  cout << "float\t" << sizeof(float) << endl;
  cout << "double\t" << sizeof(double) << endl;
  cout << "long double\t" << sizeof(long double) << endl;
  cout << "char\t" << sizeof(char) << endl;
  cout << "signed char\t" << sizeof(signed char) << endl;
  cout << "unsigned char\t" << sizeof(unsigned char) << endl;
  cout << "wchar_t\t" << sizeof(wchar_t) << endl;
  cout << "char16_t\t" << sizeof(char16_t) << endl;
  cout << "char32_t\t" << sizeof(char32_t) << endl;
  //  cout << "char8_t\t" << sizeof(char8_t) << endl; c++20
    
  return 0;
}
