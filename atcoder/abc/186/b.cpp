#include <bits/stdc++.h>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<int>> A(H, vector<int>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
    }
  }

  int min_num = INT_MAX;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      min_num = min(min_num, A[i][j]);
    }
  }

  int ans = 0;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      ans += (A[i][j] - min_num);
    }
  }

  cout << ans << endl;

  return 0;
}
