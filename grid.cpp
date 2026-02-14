#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c, q;
  cin >> r >> c >> q;

  int arr[r][c];
  int query[4];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < q; i++) {
    for (int j = 0; j < c; j++) {
      cin >> query[j];
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << " " << arr[i][j];
    }
    cout << endl;
  }

  for (int i = 0; i < q; i++) {
    cout << " " << query[i];
  }

  return 0;
}