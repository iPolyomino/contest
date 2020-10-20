#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll X, Y, A, B;
  cin >> X >> Y >> A >> B;

  ll strength = X;
  ll experience = 0;

  while ((double)A * strength <= 2e18 && A * strength < Y &&
         strength * A < strength + B) {
    experience++;
    strength *= A;
  }

  if (strength < Y) {
    experience += (Y - strength - 1) / B;
  }

  cout << experience << endl;

  return 0;
}
