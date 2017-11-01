#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<pair <int, int> > v;
  v.push_back({1, 3});
  v.push_back({4, 2});
  v.push_back({1, 9});
  sort(v.begin(), v.end());

  for (pair<int, int> &p : v) {
    cout << p.first << "," << p.second << endl;
  }

  return 0;
}
