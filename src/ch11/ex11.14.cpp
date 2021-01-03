#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <string>

using namespace std;

int main()
{
  map<string, vector<pair<string, int>>> family;
  string family_name, children;
  int age;
  cout << "Enter lastname: " << endl;
  while(cin >> family_name) {
    family[family_name];
    cout << "Enter childrens names followed by age, end with '!' for name and age"
	 << endl;
    while(cin >> children >> age){
      if (children == "!")
	break;
      family[family_name].push_back(make_pair(children, age));
    }
    cin.clear();
    cin.ignore();
    cout << "Enter lastname: " << endl;
  }

  for (const auto &f : family) {
    cout << f.first << endl;
    for (const auto &c : f.second)
      cout << "\t" << c.first << " " << c.second  << endl;
  }

  return 0;
}
