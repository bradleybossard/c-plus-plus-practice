//#include <vector>
#include <set>
#include <random>
#include <iostream>
#include <algorithm>

using namespace std;

void print_vector(vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

int binary_search(int x, vector<int> &v) {
  int s = 0;
  int e = v.size();
  while (s <= e) {
    int k = (s+e) / 2;
    if (v[k] == x) {
      return k;
    }
    if (v[k] > x) {
      e = k - 1;
    } else {
      s = k + 1;
    }

  }
  return -1;
}

int main() {
  set<int> s;

  std::srand(time(0));
  for (int i = 0; i < 40; i++) {
    s.insert(rand() % 100);
  }

  vector<int> v(s.begin(), s.end());
  print_vector(v);
  //sort(v.begin(), v.end());
  //sort(v.rbegin(), v.rend());
  //print_vector(v);

  int x = 10;
  int index = binary_search(x, v);

  if (index != -1) {
    cout << "Number " << x << " located at index " << index << endl;
  } else {
    cout << "Number " << x << " not found" << endl;
  }

  return 0;
}
