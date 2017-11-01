#include <set>
#include <iostream>

using namespace std;

int main() {

  multiset<int> s;

  s.insert(3);
  s.insert(3);
  s.insert(3);
  cout << "s.count(3) = " << s.count(3) << endl;

  // delete one 3
  s.erase(s.find(3));
  cout << "s.count(3) = " << s.count(3) << endl;
  
  // delete all 3's
  s.erase(3);
  cout << "s.count(3) = " << s.count(3) << endl;

  return 0;
}
