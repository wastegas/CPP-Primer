#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
  string in = {"The is the (expression) in the parenthesis"};
  stack<char> stk;
  bool seen = false;
  for (auto &c : in) {
    if (c == '(') {
      seen = true;
      continue;
    }
    if (c == ')') {
      seen = false;
      continue;
    }
    if (seen)
      stk.push('X');
  }
  cout << in << endl;

  for (auto &c : in) {
    if (c == '(') {
      seen = true;
      continue;
    }
    if (c == ')') {
      seen = false;
      continue;
    }
    if (seen) {
      c = stk.top();
      stk.pop();
    }
  }

  cout << in << endl;
}
  
