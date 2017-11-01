#include <vector>
#include <tuple>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  vector<tuple<int, int, int>> v;

  v.push_back(make_tuple(1, 3, 5));
  v.push_back(make_tuple(3, 2, 1));
  v.push_back(make_tuple(7, 2, 2));
  v.push_back(make_tuple(1, 2, 1));

  sort(v.begin(), v.end());

  for (tuple<int, int, int> t : v) {
    cout << get<0>(t) << "," << get<1>(t) << "," << get<2>(t) << endl;
  }
}
