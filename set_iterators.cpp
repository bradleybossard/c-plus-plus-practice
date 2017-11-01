#include <set>
#include <iostream>

using namespace std;

int main() {

  set<int> s;

  s.insert(4);
  s.insert(8);
  s.insert(1);
  s.insert(4);

  // Traditional iterator
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  // Simplier auto pointer
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  // Print last element in a set
  auto it = s.end();
  // Decrement b/c end() points past end of set
  it--;
  cout << "Last element in set = " << *it << endl;

  // Test for existence in a set
  int x = 8;
  auto it2 = s.find(8);
  if (it2 ==s.end()) {
    cout << "Could not find " << x << endl; 
  } else {
    cout << *it2 << endl;
  }

  // Lower bound
  x = 2;
  auto a = s.lower_bound(x);  // Find value of element that is atleast x
  if (a == s.begin() && a == s.end()) {
    cout << "Empty Set" << endl;
  } else if (a == s.begin()) {
    cout << *a << endl;
  } else if (a == s.end()) {
    a--;
    cout << *a << endl;
  } else {
    // if none of the above are true, the element nearest to x is a or the element before a
    auto b = a;
    b--;
    if (x-*b < *a-x) {
      cout << *b << endl;
    } else {
      cout << *a << endl;
    }
  }

  return 0;
}
