#include <set>
#include <iostream>

using namespace std;

int main() {

  set<int> s;

  s.insert(3);
  s.insert(9);
  cout << "s.count(3) = " << s.count(3) << endl;
  cout << "s.count(4) = " << s.count(4) << endl;
  s.erase(3);
  cout << "s.count(3) = " << s.count(3) << endl;

  return 0;
}
