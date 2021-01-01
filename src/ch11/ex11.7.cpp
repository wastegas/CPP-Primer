#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
  map<string, vector<string>> family;
  string family_name, children;
  cout << "Enter lastname: " << endl;
  while(cin >> family_name) {
    family[family_name];
    cout << "Enter childrens names, end with '!'" << endl;
    while(cin >> children){
      if (children == "!")
	break;
      family[family_name].push_back(children);
    }
    cout << "Enter lastname: " << endl;
  }

  for (const auto &f : family) {
    cout << f.first << endl;
    for (const auto &c : f.second)
      cout << "\t" << c << endl;
  }

  return 0;
}
