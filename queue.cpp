#include <iostream>
#include <queue>

using namespace std;

int main() {
  queue<int> q;

  q.push(3);
  q.push(7);
  q.push(10);
  q.push(1);

  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;

  return 0;
}
