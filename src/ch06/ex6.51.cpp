#include <iostream>

using std::cout; using std::endl;

void f()
{
  cout << __func__ << "() called" << endl;
  return;
}

void f(int i)
{
  cout << __func__ << "(int i) called i=" << i << endl;
  return;
}

void f(int i, int j)
{
  cout << __func__ << "(int i, int j) called " << endl;
  cout << "i=" << i << ", j=" << j << endl;
  return;
}

void f(double i, double j = 3.14)
{
  cout << __func__ << "(double i, double j) called" << endl;
  cout << "i=" << i << ", j=" << j << endl;
  return;
}

int main()
{
  f();
  f(5);
  f(4,5);
  f(2.5);
  f(2.5, 5.5);

  return 0;
}


