#include <iostream>

using namespace std;

int t[] = { 2, 6, 10, 1, 7, 3, 12, 20, 11 };

int main() {

  int n = sizeof(t) / sizeof(int);

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
        if (t[i] > t[j])
          swap(t[i], t[j]);
    }
  }

  for (int i = 0; i < n; i++) {
    cout << t[i] << endl;
  }

  return 0;
}

