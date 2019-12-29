#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool isPurchase(ll A, ll B, ll X, ll N)
{
	return A * N + B * (ll) to_string(N).size() <= X;
}

int main()
{
	ll A, B, X;
	cin >> A >> B >> X;

	if (A + B > X) {
		cout << 0 << endl;
		return 0;
	}

	ll l = 0;
	ll r = pow(10, 9);

	while (abs(r - l) > 1) {
		ll mid = (l + r) / 2;
		if (isPurchase(A, B, X, mid)) {
			l = mid;
		} else {
			r = mid;
		}
	}

	if (isPurchase(A, B, X, l + 1)) {
		cout << l + 1 << endl;
	} else {
		cout << l << endl;
	}

	return 0;
}
