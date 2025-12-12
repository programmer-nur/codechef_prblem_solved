#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b;

    cin >> a >> b;

    if (a == b + 2 || b == a + 2) {
      cout << "YES" << endl;
    } else if (a % 2 != 0 && b == a + 1) {
      cout << "YES" << endl;
    } else if (b % 2 != 0 && a == b + 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}