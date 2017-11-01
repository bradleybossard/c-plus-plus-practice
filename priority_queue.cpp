#include <iostream>
#include <queue>

using namespace std;

int main() {
  priority_queue<int> q;
  q.push(3);
  q.push(9);
  q.push(4);
  q.push(7);

  cout << q.top() << endl;
  q.pop();
  cout << q.top() << endl;
  q.pop();
  cout << q.top() << endl;

}
