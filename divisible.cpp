#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  long long odd = 0, even = 0;
  int pos = 1; 

  for (int i = n.size() - 1; i >= 0; i--) {
    int digit = n[i] - '0';

    if (pos % 2 == 1)
      odd += digit; 
    else
      even += digit; 

    pos++;
  }

  long long diff = abs(odd - even);

  if (diff % 11 == 0)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
