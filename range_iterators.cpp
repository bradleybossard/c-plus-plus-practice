#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void print_vector(vector<int> v) {
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  vector<int> v;
  v.push_back(5);
  v.push_back(9);
  v.push_back(1);
  v.push_back(11);
  v.push_back(2);
  v.push_back(15);

  sort(v.begin(), v.end());
  print_vector(v);

  reverse(v.begin(), v.end());
  print_vector(v);

  random_shuffle(v.begin(), v.end());
  print_vector(v);

  return 0;
}
