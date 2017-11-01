#include <iostream>
#include <bitset>

using namespace std;

int main() {
  // Initial bitset of size 10, initialized to 0.
  bitset <10> s;

  s[0]  = 1;
  
  for (int i = 0; i < 10; i++) {
    cout << s[i] << " ";
  }
  cout << endl;

  // Alternate method for creating bitset
  // Note that string get cut off after 10 values are read.
  bitset<10> s2(string("0010000100000110"));

  for (int i = 0; i < 10; i++) {
    cout << s2[i] << " ";
  }
  cout << endl;

  cout << "Number of ones in bitset s2 " << s2.count() << endl;

  cout << (s&s2) << endl;
  cout << (s|s2) << endl;
  cout << (s^s2) << endl;

}
