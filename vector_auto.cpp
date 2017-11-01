#include <vector>
#include <iostream>

using namespace std;

vector<int> v;

int main() {

  v.push_back(5);
  v.push_back(9);
  v.push_back(1);

  // use auto pointer for iterating over vector
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;

  // print size of vector
  cout << "v.size() = " << v.size() << endl;

  // print last item pushed onto vector
  cout << "v.back() = " << v.back() << endl;

  return 0;
}
