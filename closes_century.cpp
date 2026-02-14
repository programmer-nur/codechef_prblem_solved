#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int mm = INT_MIN;

    for (int i = 0; i < n; i++) {
      if (a[i] > mm) {
        mm = a[i];
      }
    }

    cout << mm << endl;
  }

  return 0;
}