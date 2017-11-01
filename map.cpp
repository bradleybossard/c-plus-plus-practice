#include <map>
#include <iostream>

using namespace std;

int main() {
  map<string, int> m;

  m["monkey"] = 3;
  m["donkey"] = 5;
  m["eagle"] = 7;

  cout << "m[\"donkey\"] = " << m["donkey"] << endl;

  cout << "m[\"kangaroo\"].count() = " << m["kangaroo"] << endl;
  
  cout << endl;

  for (auto animal : m) {
    cout << animal.first << " " << animal.second << endl;
  }

  return 0;
}
