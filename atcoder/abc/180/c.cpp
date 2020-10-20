#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll N;
  cin >> N;

  set<ll> ans;

  for (ll i = 1; i * i <= N; i++) {
    if (N % i == 0) {
      ans.insert(i);
      ans.insert(N / i);
    }
  }

  for (auto a : ans) {
    cout << a << endl;
  }

  return 0;
}
