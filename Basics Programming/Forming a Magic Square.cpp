#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b) { return (a < b); }

int main() {
  int s[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> s[i][j];
    }
  }
  int s1[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};
  int s2[3][3] = {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}};
  int s3[3][3] = {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}};
  int s4[3][3] = {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}};
  int s5[3][3] = {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}};
  int s6[3][3] = {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}};
  int s7[3][3] = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
  int s8[3][3] = {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}};

  int cost1 = 0;
  int cost2 = 0;
  int cost3 = 0;
  int cost4 = 0;
  int cost5 = 0;
  int cost6 = 0;
  int cost7 = 0;
  int cost8 = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (s[i][j] != s1[i][j]) {
        cost1 += abs(s1[i][j] - s[i][j]);
      }
      if (s[i][j] != s2[i][j]) {
        cost2 += abs(s2[i][j] - s[i][j]);
      }
      if (s[i][j] != s3[i][j]) {
        cost3 += abs(s3[i][j] - s[i][j]);
      }
      if (s[i][j] != s4[i][j]) {
        cost4 += abs(s4[i][j] - s[i][j]);
      }
      if (s[i][j] != s5[i][j]) {
        cost5 += abs(s5[i][j] - s[i][j]);
      }
      if (s[i][j] != s6[i][j]) {
        cost6 += abs(s6[i][j] - s[i][j]);
      }
      if (s[i][j] != s7[i][j]) {
        cost7 += abs(s7[i][j] - s[i][j]);
      }
      if (s[i][j] != s8[i][j]) {
        cost8 += abs(s8[i][j] - s[i][j]);
      }
    }
  }

  cout<< min({cost1, cost2, cost3, cost4, cost5, cost6, cost7, cost8}, comp);
}


