#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int p = 0; p < t; p++) {
    int n;
    cin >> n;
    long long int a[n][n];
    long long int row[n] = {0};
    long long int col[n] = {0};
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> a[i][j];
        row[i] += a[i][j];
        col[j] += a[i][j];
      }
    }

    sort(row, row + n);
    sort(col, col + n);
    int flag = 0;
    for (int i = 0; i < n; i++) {
      if (col[i] == row[i]) {
        flag = 1;
        // break;
      } else {
        cout << "Impossible" << endl;
        flag = 0;
        break;
      }
    }
    if (flag == 1) {
      cout << "Possible" << endl;
    }
  }
}

