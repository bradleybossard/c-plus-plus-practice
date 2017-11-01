#include <iostream>
#include <deque>

using namespace std;

void print_deque(deque<int> d) {
  cout << "front ";
  for (auto it = d.begin(); it != d.end(); it++) {
    cout << *it << " ";
  }
  cout << "back " << endl;
}

int main() {
 
  deque <int> d;
  d.push_back(2);
  d.push_back(9);
  d.push_back(3);
  d.push_front(7);
  d.push_front(5);

  print_deque(d);
  
  d.pop_front();
  print_deque(d);

  d.pop_back();

  print_deque(d);

  return 0;
}
