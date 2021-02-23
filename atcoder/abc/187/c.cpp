#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }

  set<string> exclamation, noexclamation;

  for (int i = 0; i < N; i++) {
    if (S[i][0] == '!') {
      exclamation.insert(S[i].erase(0, 1));
    } else {
      noexclamation.insert(S[i]);
    }
  }

  set<string> intersec;
  set_intersection(exclamation.begin(), exclamation.end(),
                   noexclamation.begin(), noexclamation.end(),
                   inserter(intersec, intersec.end()));

  if (intersec.size() == 0) {
    cout << "satisfiable" << endl;
  } else {
    cout << *intersec.begin() << endl;
  }

  return 0;
}
