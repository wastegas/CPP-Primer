#include "Chapter6.h"

int fact(int val)
{
  int i = 1;
  int ret = 1;
  while (i <= val) {
    ret *= i;
    ++i;
  }
  return ret;
}
