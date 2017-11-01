#include <vector>
#include <iostream>

using namespace std;

int main() {
  // initial vector of size 10, initial value of 5 for each item
  vector<int> v(10, 5);

  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
