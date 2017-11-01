#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int> s;

  s.push(3);
  s.push(7);
  s.push(10);
  s.push(1);

  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;

  return 0;
}
