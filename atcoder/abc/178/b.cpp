#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << max(max(b * d, a * c), max(b * c, a * d)) << endl;
  return 0;
}
