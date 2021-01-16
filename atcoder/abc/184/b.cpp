#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  string S;
  cin >> S;

  int score = X;

  for (int i = 0; i < N; i++) {
    if (S[i] == 'o') {
      score++;
    } else if (score > 0) {
      score--;
    }
  }

  cout << score << endl;

  return 0;
}
