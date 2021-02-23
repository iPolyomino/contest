#include <bits/stdc++.h>

using namespace std;

int S(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int A, B;
  cin >> A >> B;
  if (S(A) >= S(B)) {
    cout << S(A) << endl;
  } else {
    cout << S(B) << endl;
  }

  return 0;
}
