#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  int c[n] = {0};
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int u, l;
  u = 0;
  for (int i = 0; i < n; i++) {
    int x = arr[i];
    u = x + 1;
    // l = x-1;
    for (int j = 0; j < n; j++) {
      if (arr[j] == x || arr[j] == u) {
        c[i]++;
        // cout<<c[i]<<" ";
      }
    }
    // cout<<c[i]<<" ";
  }
  sort(c, c + n);
  cout << c[n - 1];
}
