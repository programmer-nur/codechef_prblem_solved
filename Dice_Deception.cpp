#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 1;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> values(n);

    for (int i = 0; i < n; i++)
      cin >> values[i];

    sort(values.begin(), values.end());

    for (int i = 0; i < k; i++) {
      int val = values[i];
      if (val == 1)
        values[i] = 6;
      else if (val == 2)
        values[i] = 5;
      else if (val == 3)
        values[i] = 4;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += values[i];
    }

    cout << sum << endl;
  }

  return 0;
}