 if (a % 2 == 0 && b % 2 == 0) {
      if (a == b + 2 || b == a + 2) {
        cout << "YES" << endl;
      }
    } else if (a % 2 != 0 && b % 2 != 0) {
      if (a == b + 2 || b == a + 2) {
        cout << "YES" << endl;
      }
    } else if (a + 1 == b || b == a + 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }