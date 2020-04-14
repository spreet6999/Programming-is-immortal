#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int k;
  cin >> n;
  cin >> k;
  long long int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  long long int temp = 0;
  long long rem[k] = {0};
  int flag0 = 0;
  long long int c = 0;
  for (int i = 0; i < n; i++) {
    int remainder = arr[i] % k;
    if (flag0 == 0 && remainder == 0) {
      rem[remainder] = 1;
      flag0 = 1;
    } else
      rem[remainder] += 1;
  }
  //    for(int i=0; i<k; i++)
  //        cout<< rem[i]<<" ";

  if (k % 2 != 0) {
    int temp1 = k - 1;
    if (rem[0] != 0)
      c++;
    for (int i = 1; i <= k / 2; i++) {
      c += max(rem[i], rem[temp1]);
      // cout<<c;
      temp1--;
      // cout<<rem[i]<<" ";
    }
  } else {
    int temp1 = k - 1;
    if (rem[0] != 0)
      c++;
    for (int i = 1; i < k / 2; i++) {
      c += max(rem[i], rem[temp1]);
      // cout<<temp1<<" ";
      temp1--;
    }
    // cout<<temp1<<" ";

    if (rem[k / 2] != 0)
      c++;
  }
  cout << c;
}

