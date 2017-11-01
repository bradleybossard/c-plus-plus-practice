#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
vector<string> results;

int n = 9;

void gen(int k) {
  if (k == n + 1) {
    stringstream s;
    for (int i = 0; i < v.size(); i++) {
      s << v[i] << " ";
    }
    results.push_back(s.str());
  } else {
    gen(k+1);
    v.push_back(k);
    gen(k+1);
    v.pop_back();
  }
}

int main() {
  gen(1);

  //sort(results.begin(), results.end());

  for (int i = 0; i < results.size(); i++) {
    cout << results[i] << endl;
  }

  return 0;
}
